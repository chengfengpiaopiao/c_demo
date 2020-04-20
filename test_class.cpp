
#include <iostream>
using namespace std;

class TestClass 
{
public:
	void say() {
		cout << "hello class" << endl;
	}
private:
};

int main() {
	TestClass testClass;
	testClass.say();
}