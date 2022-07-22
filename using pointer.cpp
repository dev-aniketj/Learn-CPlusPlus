#include <iostream>

//USING POINTER

using namespace std;

int main(){
	int a = 5;
	int *ptr;
	ptr = &a;
	cout<<*ptr<<endl;
	*ptr = 10;
	cout<<a<<endl;
	
	return 0;
}