#include "CustomString.h"

CustomString::CustomString(TCHAR *str) {
	if (str == nullptr) return;

	if (this->length != 0) {
		memset(this->myString, '\0', (this->length+1) * sizeof(TCHAR));
		free(this->myString);
	}

	int newLen = _tcslen(str);
	this->myString = (char *)malloc((newLen + 1) * sizeof(TCHAR));
	memset(this->myString, '\0', (newLen+1) * sizeof(TCHAR));
	_tcsncpy(this->myString, str, newLen);
	this->length = newLen;
}

CustomString::CustomString(CustomString& cs) {
	// Self Pointer Check
	// newCS.length Check
	if (cs.length == 0) return;

	if (this->length){
		memset(this->myString, '\0', (this->length + 1) * sizeof(TCHAR));
		free(this->myString);
	}

	this->myString = (TCHAR *)malloc((cs.length + 1) * sizeof(TCHAR));
	memset(this->myString, '\0', (cs.length + 1) * sizeof(TCHAR));
	
	_tcsncpy(this->myString, cs.getValue(), cs.length);
	this->length = cs.length;
}

CustomString::~CustomString() {
	if (this->length != 0) {
		memset(this->myString, '\0', (this->length+1) * sizeof(TCHAR));
		free(this->myString);
	}
}

TCHAR *CustomString::getValue() {
	if (this->length == 0) exit(1);
	return this->myString;
}

CustomString& CustomString::operator+ (CustomString& cs) {
	// Null Pointer Check
	// Self Pointer Check
	// Length Check
	CustomString *ret = new CustomString();

	unsigned int newLength = this->length + cs.length;
	ret->myString = (TCHAR *)malloc((newLength + 1) * sizeof(TCHAR));
	memset(ret->myString, '\0', (newLength + 1) * sizeof(TCHAR));
	_tcscpy(ret->myString, this->myString);
	_tcscat(ret->myString, cs.getValue());
	ret->length = newLength;

	return *ret;
}

void CustomString::operator= (CustomString& cs) {
	// Null Check
	// Length Check
	if (cs.length == 0) return;
	if (this->length) {
		memset(this->myString, '\0', (this->length + 1) * sizeof(TCHAR));
		free(this->myString);
		this->length = 0;
	}
	
	this->myString = (TCHAR *)malloc((cs.length + 1) * sizeof(TCHAR));
	memset(this->myString, '\0', (cs.length + 1) * sizeof(TCHAR));

	_tcsncpy(this->myString, cs.getValue(), cs.length);
	this->length = cs.length;

	return;
}