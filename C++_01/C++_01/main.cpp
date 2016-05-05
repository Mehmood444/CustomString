#include <iostream>

using namespace std;
void func(int& a);


int main(int argc, char* argv[])
{
	cout << "Jeon SangHyeon" << endl;
	cout << "19 yesars old" << endl;
	cout << "=============================" << endl;
	bool b = true;
	cout << b << endl;
	b = -1;
	cout << b << endl;
	cout.setf(ios::boolalpha);
	b = true;
	cout << b << endl;
	b = -1;
	cout << b << endl;
	cout << "=============================" << endl;

	int a = 10;
	printf("%p\n", &a);
	func(a);
	system("pause");
	return 0;
}

void func(int& a)
{
	printf("%p\n", &a);
}