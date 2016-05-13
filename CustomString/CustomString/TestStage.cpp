#include "TestStage.h"

void failed(int stage) {
	cout << "[*] Test " << stage << " Failed" << endl;
	system("pause");
	exit(1);
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
		failed(9);
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
		failed(10);
	}
}

void Test11() {
	CustomString cs1("ABCD");
	if (cs1 < "BCDE") {
		cout << "[*] Test 11 SUCCESS" << endl;
	}
	else {
		cout << "[*] Test 11 Failed" << endl;
		failed(11);
	}
}

void Test12() {
	CustomString cs1("ABCD");
	CustomString cs2("BCDE");
	if (cs1 < cs2) {
		cout << "[*] Test 12 SUCCESS" << endl;
	}
	else {
		cout << "[*] Test 12 Failed" << endl;
		failed(12);
	}

}

void Test13() {
	CustomString cs1("ABCD");
	CustomString cs2("BCDE");
	if (cs1 <= "BCDE" && cs2 >= cs1) {
		cout << "[*] Test 13 SUCCESS" << endl;
	}
	else {
		cout << "[*] Test 13 Failed" << endl;
		failed(13);
	}
}

void Test14() {
	CustomString cs1("SSECCUS 41 tseT ]*[");
	cout << cs1.reverse() << endl;
}

void Test15() {
	CustomString cs1("Hello World!!");
	if (cs1.find('H') == 0 && cs1.find('o', 6) == 7) {
		cout << "[*] Test 15 SUCCESS" << endl;
	}
	else {
		failed(15);
	}
}

void Test16() {
	CustomString cs1("ABCAAAAAAAAAAAABC");
	if (cs1.find("ABC", 3) == 14) {
		cout << "[*] Test 16 SUCCESS" << endl;
	}
	else {
		failed(16);
	}
}

void Test17() {
	CustomString cs1("AAAAA[*] Test 17 SUCCESSBBBBB");
	CustomString cs2 = cs1.mid(5, 19);
	cout << cs2 << endl;
}

void Test18() {
	CustomString cs1("AAAAA[*] Test 18 ");
	CustomString cs2("SUCCESSBBBBB");
	CustomString cs3 = cs1.right(12) + cs2.left(7);
	cout << cs3 << endl;
}