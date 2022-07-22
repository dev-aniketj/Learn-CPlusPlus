#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int *ptr1 = &a;
	int *ptr2 = &a;
	cout<<*ptr1<<endl;
	delete ptr1;
	cout<<*ptr2<<endl;	//DANGLING Pointer(Error)

	return 0;
}