//pure virtual function
#include <iostream>
using namespace std;
class Person {
	public:
		virtual void give()=0;
};
class Boy : public Person {
	public:
		void give() {
			cout<<"Brown Bun"<<endl;
		}
};
class Girl:public Person {
	public:
		void give() {
			cout<<"Pink Bun"<<endl;
		}
};
int main() {
	Person *ptr;
	Boy b1;
	Girl g1;

	ptr = &b1;
	ptr->give();

	ptr = &g1;
	ptr->give();

	return 0;
}