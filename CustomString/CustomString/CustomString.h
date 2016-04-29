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
	
	TCHAR *get();
};