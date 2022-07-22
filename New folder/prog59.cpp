//virtual - 2
#include <iostream>
using namespace std;
class Person {
	public :
		virtual void give() {
			cout<<"Bun"<<endl;
		}
};
class Boy : public Person {
	public:
		void give() override {
			cout<<"Brown Bun"<<endl;
		}
};
class Girl:public Person {
	public:
		void give() override {
			cout<<"Pink Bun"<<endl;
		}
};
int main() {
	Person *ptr;

	ptr = new Boy();
	ptr->give();

	ptr = new Girl();
	ptr->give();

	return 0;
}