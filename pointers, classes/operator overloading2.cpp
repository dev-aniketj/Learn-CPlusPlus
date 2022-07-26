//increment operator overloading
#include<iostream>
using namespace std;
class Person {
	private:
		int weight;
	public:
		Person(int weight = 0) {
			this->weight = weight;
		}
		//pre increment
		void operator ++() {
			++weight;
		}
		//post increment
		void operator ++(int) {
			weight++;
		}
		void getData() {
			cout<<"Weight : "<<weight<<endl;
		}
};
int main() {
	Person p1(65);
	p1.getData();

	++p1;
	p1.getData();

	p1++;
	p1.getData();

	return 0;
}