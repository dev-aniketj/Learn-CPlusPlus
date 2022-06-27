#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	cout<<"Enter your name : ";
	//cin>>name;
	getline(cin, name);
	cout<<"String is : "<<name<<endl;
	cout<<"Length of name : "<<name.length()<<endl;
	cout<<"Size of name : "<<name.size()<<endl;
}