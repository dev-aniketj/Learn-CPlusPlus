#include <iostream>
#include <string>
using namespace std;
int main() {
	string firstName, lastName, fullName, address;
	cout<<"Enter the Address : ";
	getline(cin, address);
	cout<<"Enter the First Name : ";
	cin>>firstName;
	cout<<"Enter the Last Name : ";
	cin>>lastName;

	fullName = firstName.append(" "+lastName);
	cout<<"Name : "<<fullName<<endl;
	cout<<"Address : "<<address<<endl;
}