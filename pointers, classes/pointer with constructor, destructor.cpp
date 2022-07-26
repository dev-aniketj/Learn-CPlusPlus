#include <iostream>
using namespace std;
class Test {
	public:
		int *age;
	public:
		Test(int a = 22) {
			age = new int();
			*age = a;
			cout<<"Constructor"<<endl;
		}
		~Test() {
			delete age;
			cout<<"Destructor"<<endl;
		}
};
int main() {
	Test obj1(20);
	return 0;
}