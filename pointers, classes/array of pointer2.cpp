#include <iostream>
using namespace std;
int main() {
	int *ptr = new int[5];	//array of pointer
	for(int i=0; i<5;  i++) {
		*(ptr+i) = (i+1)*5;
	}
	cout<<"Printing the ptr values : "<<endl;
	for(int i=0; i<5; i++) {
		cout<<*(ptr+i)<<endl;
	}
	return 0;
}