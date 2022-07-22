//constructor - inheritance 3
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
	public:
		Derived():Base() {
			cout<<"Derived Default Constructor."<<endl<<endl;
		} Derived(int a):Base(a) {
			cout<<"Derived Parameterized Constructor."<<endl<<endl;
		}
};
int main() {
	Derived d1, d2(10);
	return 0;
}