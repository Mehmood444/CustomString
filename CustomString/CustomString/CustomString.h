#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <tchar.h>

class CustomString {
private:
	TCHAR *myString;
	int length;

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
	
	bool operator==(TCHAR *str);
	bool operator==(CustomString& cs);
	bool operator!=(TCHAR *str);
	bool operator!=(CustomString& cs);
	bool operator>(TCHAR *str);
	bool operator>(CustomString& cs);
	bool operator<(TCHAR *str);
	bool operator<(CustomString& cs);
	bool operator<=(TCHAR *str);
	bool operator<=(CustomString& cs);
	bool operator>=(TCHAR *str);
	bool operator>=(CustomString& cs);

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
	int getLength();

	// Functions

	CustomString reverse();
	CustomString left(int count);
	CustomString mid(int offset, int count);
	CustomString right(int count);
	CustomString replace(TCHAR *from, TCHAR *to);
	int find(TCHAR ch);
	int find(TCHAR ch, int offset);
	int find(TCHAR *str);
	int find(TCHAR *str, int offset);
	TCHAR at(int offset);
	void clear();
};