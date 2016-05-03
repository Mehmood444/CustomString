#include "CustomString.h"

CustomString::CustomString(TCHAR *str) {
	if (str == nullptr) return;

	if (length != 0) {
		memset(this->myString, '\0', (length+1) * sizeof(TCHAR));
		free(this->myString);
	}

	int newLen = _tcslen(str);
	this->myString = (char *)malloc((newLen + 1) * sizeof(TCHAR));
	memset(this->myString, '\0', (newLen+1) * sizeof(TCHAR));
	_tcsncpy(this->myString, str, newLen);
	length = newLen;
}

CustomString::CustomString(CustomString& newCS) {
	// NULL Pointer Check
	// newCS.length Check
}

CustomString::~CustomString() {
	if (length != 0) {
		memset(myString, '\0', length);
		free(myString);
	}
}

TCHAR *CustomString::getValue() {
	if (length == 0) exit(1);
	return this->myString;
}

CustomString& CustomString::operator+ (CustomString& cs) {
	// Null Pointer Check
	// Self Pointer Check
	// Length Check
	TCHAR *newString;
	unsigned int newLength = _tcslen(this->myString) + _tcslen(cs.getValue());
	newString = (TCHAR *)malloc((newLength + 1) * sizeof(TCHAR));
	memset(newString, '\0', newLength + 1);
	_tcscpy(newString, this->myString);
	_tcscat(newString, cs.getValue());

	memset(this->myString, '\0', length);
	free(this->myString);

	this->myString = newString;
	length = newLength;

	return *this;
}