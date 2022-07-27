#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int *ptr = NULL;	//NULL Pointer
	int **ptr2;			//WILD Pointer
	ptr = &a;
	ptr2 = &ptr;
	cout<<ptr<<endl;		//address of a
	cout<<ptr2<<endl;		//address of ptr
	cout<<*ptr<<endl;		//value of a
	cout<<**ptr2<<endl;		//value of *ptr (a)
	cout<<*(*ptr2)<<endl;	//value of *ptr (a)


}