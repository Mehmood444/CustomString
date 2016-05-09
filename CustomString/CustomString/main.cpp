#include <stdio.h>
#include <iostream>
#include <string>
#include "CustomString.h"

using namespace std;

void Test1();
void Test2();
void Test3();

int main(int argc, char *argv[])
{
	Test1();
	Test2();
	Test3();
	system("pause");
	return 0;
}

void Test1() {
	CustomString cs1("TEST 1 SUCCESS");
	cout << cs1.getValue();
	cout << endl;
}

void Test2() {
	CustomString cs1("TEST 2 SUCCESS");
	CustomString cs2(cs1);
	cout << cs2.getValue();
	cout << endl;
}

void Test3() {
	CustomString cs1;
	cs1 = "Hello, World!";
	cout << cs1.getValue();
	cout << endl;
}