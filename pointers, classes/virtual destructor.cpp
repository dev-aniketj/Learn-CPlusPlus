//virtual destructor - use to destroy the whole object,
//	otherwise without virtual it only destroy the Base class functionality.
#include <iostream>
using namespace std;
class Base {
	public:
		virtual ~Base() {
			cout<<"Base Class Destroyed."<<endl;
		}
};
class Derived:public Base {
	public:
		~Derived() {
			cout<<"Derived Class Destroyed."<<endl;
		}
};
int main() {
	Base *b1 = new Derived();
	delete(b1);
	return 0;
}