#include <stdio.h>
#include <iostream>
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
	first = first + second;
	cout << cs;
	cout << first;
	cout << " Success" << endl;
}