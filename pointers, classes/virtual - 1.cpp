//virtual - 1
#include<iostream>
using namespace std;
class Base {
	public:
		virtual	void show() {
			cout<<"Base"<<endl;
		}
};
class Derived1 : public Base {
	public:
		void show() {
			cout<<"Derived 1"<<endl;
		}
};
class Derived2:public Base {
	public:
		void show() {
			cout<<"Derived 2"<<endl;
		}
};
int main() {
	Base *ptr;

	ptr = new Derived1();
	ptr->show();

	ptr = new Derived2();
	ptr->show();

}