#include <iostream>
using namespace std;
int main() {
	int arr[5] = {10,20,30,40,50};
//	int *ptr = &arr[0];
	int *ptr = arr;		//giving pointer to the base address of an array
	for(int i=0; i<5; i++) {
		cout<<*(ptr+i)<<endl;
	}
}