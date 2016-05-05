#include <stdio.h>
#include <iostream>
#include "CustomString.h"

using namespace std;

//void Test0();
void Test1();
void Test2();
void Test3();
void Test4();
void Test5();

int main(int argc, char *argv[])
{
	//Test0();
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	system("pause");
	return 0;
}

/*
void Test0() {
	CustomString cs("TEST...");
	CustomString cs2 = cs;
	cout << cs2 << endl;
}
*/

void Test1()
{
	CustomString cs("First Stage");
	cout << cs.getValue();
	cout << " Success" << endl;
}

void Test2()
{
	CustomString cs("Second Stage");
	cout << cs;
	cout << " Success" << endl;
}

void Test3()
{
	CustomString cs("Third Stage : ");
	CustomString first("Hello, ");
	CustomString second("World!");
	CustomString third = first + second;
	cout << cs;
	cout << third;
	cout << " Success" << endl;
}

void Test4()
{
	CustomString cs("Fourth Stage");
	cout << cs << " Success" << endl;
}

void Test5()
{
	CustomString cs1("Fifth Stage");
	CustomString cs2 = CustomString(cs1);
	cout << cs2;
	cout << " Success" << endl;
}