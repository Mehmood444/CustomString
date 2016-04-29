#include "CustomString.h"

CustomString::CustomString(TCHAR *str) {
	if (str == nullptr) return;

	if (length != 0) {
		memset(myString, '\0', (length+1) * sizeof(TCHAR));
		free(myString);
	}

	int newLen = _tcslen(str);
	myString = (char *)malloc((newLen + 1) * sizeof(TCHAR));
	memset(myString, '\0', (newLen+1) * sizeof(TCHAR));
	_tcsncpy(myString, str, newLen);
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

TCHAR *CustomString::get() {
	if (length == 0) exit(1);
	return myString;
}
