// typedef keyword is used to assign a new name to any existing data-type.

#include <iostream>
using namespace std;
int main(){
	typedef unsigned int ui;	// stores only positive values.
	ui age;
	
	cout<<"Enter your age : ";
	cin>>age;
	cout<<"Age : "<<age;
	
	return 0;
}