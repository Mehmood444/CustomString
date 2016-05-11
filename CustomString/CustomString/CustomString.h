#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <tchar.h>

class CustomString {
private:
	TCHAR *myString;
	unsigned int length;

public:
	// Constructor 
	CustomString() {}
	CustomString(TCHAR *str);
	CustomString(CustomString&);
	// Destructor
	~CustomString();

	// Operator overloading
	CustomString& operator= (TCHAR *str);
	CustomString& operator= (CustomString& cs);
	CustomString operator+ (TCHAR *str);
	CustomString operator+ (CustomString& cs);
	CustomString& operator+=(TCHAR *str);
	CustomString& operator+=(CustomString& cs);

	friend std::ostream& operator<< (std::ostream &out, CustomString& cs) {
		out << cs.getValue();
		return out;
	}
	friend CustomString& operator<< (CustomString& cs, TCHAR *str) {
		CustomString ret = cs + CustomString(str);
		return ret;
	}
	
	// Getter
	TCHAR *getValue();
	unsigned int getLength();

	// Setter

	void setLength(unsigned int newLength);
};