//constructor - inheritance 2
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
		Derived() {
			cout<<"Derived Default Constructor."<<endl;
		} Derived(int a) {
			cout<<"Derived Parameterized Constructor."<<endl;
		}
};
int main() {
	Derived d1, d2(10);
	return 0;
}