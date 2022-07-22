#include <iostream>
#include <string>
using namespace std;
class Person {
	private:
		string name;
		int age;
		Person *ptr = this;
	public :
		Person(string name, int age=int(NULL)) {
//			this->name = name;
//			this->age = age;
			ptr->name = name;
			ptr->age = age;
		}
		void printValue() {
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
};
int main() {
	Person *ptr = new Person("aniket", 23);
	ptr->printValue();

	Person person2("ayush");
	person2.printValue();

	return 0;
}