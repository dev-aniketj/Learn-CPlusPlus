#include <iostream>
using namespace std;
class Test {
	public:
		int *age;	//wild pointer
	public:
		Test(int a = 0) {
			age = new int();
			*age = a;
			cout<<"Constructor (age) : "<<*age<<endl;
		}
		~Test() {
			delete age;
			cout<<"Destructor"<<endl;
		}
};
int main() {
	Test obj1(20);
	Test obj2;
	return 0;
}