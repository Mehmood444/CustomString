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
	CustomString() {}
	CustomString(TCHAR *str);
	CustomString(CustomString&);

	~CustomString();
	TCHAR *getValue();

	friend std::ostream& operator<< (std::ostream &out, CustomString& cs) {
		out << cs.getValue();
		return out;
	}

	friend CustomString& operator<< (CustomString& cs, TCHAR *str) {
		CustomString ret = cs + CustomString(str);
		return ret;
	}

	CustomString& operator+ (CustomString& cs);
	void operator= (CustomString& cs);
};