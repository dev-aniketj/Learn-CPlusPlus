#include <iostream>
#include <string>
using namespace std;
class A {
	private:
		string name;
	public:
		A(string n) {
			name = n;
		}
		A(A& obj) {	//copy constructor
			this->name = obj.name;
		}
		void getData() {
			cout<<"Name : "<<name<<endl;
		}
};
int main() {
	A obj1("aniket");
	A obj2(obj1);
	
	obj1.getData();
	obj2.getData();
	
	return 0;
}