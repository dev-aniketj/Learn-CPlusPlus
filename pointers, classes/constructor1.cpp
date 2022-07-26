//constructor
#include <iostream>
using namespace std;
class A {
	private:
		int age;
	public :
//		A() {
//			age = 0;
//		}
//		A(int a) {
//			age = a;
//		}
		A(int a=0) {
			age=a;
		}
		int getData() {
			return age;
		}
};
int main() {
	A a_obj, b_obj(28);

	cout<<a_obj.getData()<<endl;
	cout<<b_obj.getData()<<endl;

	return 0;
}