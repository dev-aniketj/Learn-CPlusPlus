//constructor - inheritance 1
#include <iostream>
using namespace std;
class Base {
	public:
		Base() {
			cout<<"Base Default Constructor."<<endl;
		} Base(int a) {
			cout<<"Base Parameterized Constructor."<<endl;
		}
};
class Derived : public Base {
		//Empty
};
int main() {
	Derived d;
	return 0;
}