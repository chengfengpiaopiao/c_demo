#pragma once
#include <iostream>
using namespace std;

class Personal
{
public:
	Personal();
	~Personal();
	void eat() {
		cout << "我是基类" << endl;
	};
};

