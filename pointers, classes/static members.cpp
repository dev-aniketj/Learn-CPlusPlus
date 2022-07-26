//static members
#include <iostream>
using namespace std;
class A {
	private:
		int a, b;
	public:
		static int c;	//static member declare
	public:
		A(int a=0, int b=0) {
			this->a = a;
			this->b = b;
			c++;		//static member increment
		}
		void sum() {
			cout<<"Sum is : "<<a+b+c<<endl;
		}
};
int A::c = 1;	//static member is always define outside the class.
int main() {
	A a1(1,2);
	a1.sum();
	cout<<"Value of c : "<<A::c<<endl;

	return 0;
}