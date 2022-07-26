#include <iostream>
#include <string>
using namespace std;
struct person {
	string name;
	int age;
	float weight;
	float height;
	double salary;
};
int main() {
	person pVar;
	pVar.age = 22;
	pVar.name = "aniket";
	pVar.weight = 60.5f;
	pVar.height = 5.9f;
	pVar.salary = 1000000;
	
	cout<<"Name : "<<pVar.name<<endl;
	cout<<"Age : "<<pVar.age<<endl;
	cout<<"Weight : "<<pVar.weight<<endl;
	cout<<"Height : "<<pVar.height<<endl;
	cout<<"Salary : "<<pVar.salary<<endl;

	return 0;
}
