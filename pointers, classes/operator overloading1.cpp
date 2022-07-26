//operator overloading
#include <iostream>
using namespace std;
class A {
	private:
		int weight;
	public:
		A(int x=0) {
			weight=x;
		}
		//traditional overloading
		A addWeight(A obj2) {
			A temp;
			temp.weight = weight + obj2.weight;
			return temp;
		}
		//operator overloading
		A operator +(A obj) {
			A temp;
			temp.weight = weight + obj.weight;
			return temp;
		}
		void getData() {
			cout<<weight<<endl;
		}
};
int main() {
	A person1(4);
	A person2(7), person3(2);

	A total = person1+person2+person3;			//operator overloading
//	total = person1.addWeight(person2);	//traditional overloading

	total.getData();
	return 0;
}