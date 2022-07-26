#include <iostream>
using namespace std;

// Single catch block

int main() {
	int num1, num2;
	cout<<"Enter two numbers : \n";
	cout<<"First Number : ";
	cin>>num1;
	cout<<"Second Number : ";
	cin>>num2;
	try {
		if(num2==0) {
			throw num2;
		} else {
			cout<<"Result is : "<<num1/num2;
		}
	} catch(int x) {
		cout<<"exception occur";
	}


	return 0;
}