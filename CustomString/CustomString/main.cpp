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
void Test7();
void Test8();
void Test9();
void Test10();

int main(int argc, char *argv[])
{
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	Test6();
	Test7();
	Test8();
	Test9();
	Test10();
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

void Test7() {
	CustomString cs1("[*] Test 7 ");
	cs1 += "SUCCESS";
	cout << cs1;
	cout << endl;
}

void Test8() {
	CustomString cs1("[*] Test 8 ");
	CustomString cs2("SUCCESS");
	cs1 += cs2;
	cout << cs1;
	cout << endl;
}

void Test9() {
	CustomString cs1("TEST");
	if (cs1 == "TEST" && cs1 != "TesT") {
		cout << "[*] Test 9 SUCCESS" << endl;
	}
	else {
		cout << "[*] Test 9 Failed" << endl;
		exit(1);
	}
}

void Test10() {
	CustomString cs1("TEST");
	CustomString cs2("TEST");
	CustomString cs3("TesT");
	if (cs1 == cs2 && cs1 != cs3) {
		cout << "[*] Test 10 SUCCESS" << endl;
	}
	else {
		cout << "[*] Test 10 Failed" << endl;
		exit(1);
	}
}