#include <iostream>
//Call by Ref
using namespace std;
void square(int*);
int main() {
	int number = 10;
	cout<<number<<endl;
	square(&number);
	cout<<number<<endl;
	return 0;
}
void square(int *ptr) {
	int temp = *ptr;	//store value to the new variable
	temp = temp*temp;	//square the value in a variable
	*ptr = temp;		//store value at the pervious address
}