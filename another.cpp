
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
using std::string;

void doNotion() {
	string anotherStr = "hello i am from Another";
	cout << anotherStr << endl;
}

void testVariable() {
	int number = 100;
	cout << ("int���͵ı���" )  << number  << endl;

	bool isNeedLearn = true;
	cout << (isNeedLearn ? "��Ҫ" : "����Ҫ") << "--����bool" << endl;

	char month[] = "�ַ�������";
	cout << month << endl;

	string monthStr = "�ַ�������2";
	cout << monthStr << endl;

	float quality = 0.0000000001;
	cout << "С������float = " << quality << endl;

	double qualityDouble = 0.0000001;
	cout << "С������double = " << qualityDouble << endl;

	wchar_t wChar[] = L"���ַ�";
	cout << wChar << endl;
}