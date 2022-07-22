//overriding member function of Parent class
#include <iostream>
using namespace std;
class A {
	public:
		void show() {
			cout<<"A"<<endl;
		}
};
class B : public A {
	public:
		void show() {
			cout<<"B"<<endl;
			A::show();		//calling Parent class function
		}
};
int main() {
	B b;
	b.show();
	return 0;
}