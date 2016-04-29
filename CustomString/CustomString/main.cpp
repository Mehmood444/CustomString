#include <stdio.h>
#include <iostream>
#include "CustomString.h"

using namespace std;

int main(int argc, char *argv[])
{
	CustomString cs("HelloWorld!");
	cout << cs.get() << endl;
	system("pause");
	return 0;
}