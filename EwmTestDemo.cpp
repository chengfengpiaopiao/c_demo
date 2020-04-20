// EwmTestDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
//引入其他c++文件
#include "another.h"
using namespace std;
using std::string;



void doAnything() {
	cout << "hello c++";
}

void doubleValue(int *val)
{
	*val *= 2;
	
}

std::string iso_8859_1_to_utf8(std::string &str)
{
	string strOut;
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		uint8_t ch = *it;
		if (ch < 0x80) {
			strOut.push_back(ch);
		}
		else {
			strOut.push_back(0xc0 | ch >> 6);
			strOut.push_back(0x80 | (ch & 0x3f));
		}
	}
	return strOut;
}


int main()
{
    std::cout << "Hello World!\n"; 
	string src = "7B2263223A362C2274223A382C2264223A32327D7C7C7B22416363657074223A222A5C2F2A222C22436F6E74656E742D54797065223A226170706C69636174696F6E5C2F6A736F6E222C2261707074797065223A2232222C2263686172736574223A227574662D38222C226C616E6775616765223A227A685F434E222C2276657273696F6E223A22322E312E38222C224163636570742D4C616E6775616765223A227A682D636E222C22436F6E74656E742D4C656E677468223A22313030222C224163636570742D456E636F64696E67223A22677A69702C206465666C617465227D";
	doAnything();

	int number;
	doubleValue(&number);
	string dest = iso_8859_1_to_utf8(src);

	std::cout << dest << endl;

	doNotion();

}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
