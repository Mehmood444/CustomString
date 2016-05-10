#include <stdio.h>
#include <iostream>
#include <string>
#include "CustomString.h"

using namespace std;

void Test1();
void Test2();
void Test3();
void Test4();
void Test5();
void Test6();

int main(int argc, char *argv[])
{
	Test1();
	Test2();
	Test3();
	Test4();
	Test5(); // Error Occured
	Test6();
	system("pause");
	return 0;
}

void Test1() {
	CustomString cs1("[*] TEST 1 SUCCESS");
	cout << cs1.getValue();
	cout << endl;
}

void Test2() {
	CustomString cs1("[*] TEST 2 SUCCESS");
	CustomString cs2(cs1);
	cout << cs2.getValue();
	cout << endl;
}

void Test3() {
	CustomString cs1;
	cs1 = "[*] TEST 3 SUCCESS";
	cout << cs1.getValue();
	cout << endl;
}

void Test4() {
	CustomString cs1("[*] TEST 4 SUCCESS");
	CustomString cs2;
	cs2 = cs1;
	cout << cs2;
	cout << endl;
}

void Test5() {
	CustomString cs1("[*] TEST 5 ");
	cs1 = cs1 + "SUCCESS";
	cout << cs1;
	cout << endl;
}

void Test6() {
	CustomString cs1("[*] TEST 6 ");
	CustomString cs2("SUCCESS");
	cs1 = cs1 + cs2;
	cout << cs1;
	cout << endl;
}