
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
	cout << ("int类型的变量" )  << number  << endl;

	bool isNeedLearn = true;
	cout << (isNeedLearn ? "需要" : "不需要") << "--测试bool" << endl;

	char month[] = "字符串测试";
	cout << month << endl;

	string monthStr = "字符串测试2";
	cout << monthStr << endl;

	float quality = 0.0000000001;
	cout << "小数测试float = " << quality << endl;

	double qualityDouble = 0.0000001;
	cout << "小数测试double = " << qualityDouble << endl;

	wchar_t wChar[] = L"宽字符";
	cout << wChar << endl;
}