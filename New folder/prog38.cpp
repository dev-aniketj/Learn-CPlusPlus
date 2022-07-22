#include <iostream>
using namespace std;
int main() {
	int arr[4] = {10,20,30,40};
	int *ptr = arr;
	cout<<*(++ptr)<<endl;
	delete ptr;		//using in C++
	//free(ptr); - using in C
	cout<<*(++ptr)<<endl;	//compiler problem
}