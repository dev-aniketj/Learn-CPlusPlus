#include <iostream>
using namespace std;
struct Student {
	string fullName;
	int roll_no;
	int marks;
};
int main() {
	Student student1;

	student1.fullName = "Aniket Jain";
	student1.roll_no = 4;
	student1.marks = 95;

	cout<<"Name : "<<student1.fullName<<endl;
	cout<<"Roll No. : "<<student1.roll_no<<endl;
	cout<<"Marks : "<<student1.marks<<endl;
	
	return 0;
}