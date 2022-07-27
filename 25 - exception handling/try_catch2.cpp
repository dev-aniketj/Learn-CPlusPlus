#include <iostream>
#include <string>
using namespace std;

// Multiple catch block

int main() {
	int num1, num2;
	cout<<"Enter two numbers : \n";
	cout<<"First Number : ";
	cin>>num1;
	cout<<"Second Number : ";
	cin>>num2;
	try {
		if(num2==0) {
			throw (string)"Number divided by 0.";
		} else {
			cout<<"Result is : "<<num1/num2;
		}
	} catch(int x) {
		cout<<"exception occur";
	} catch(string y) {
		cout<<y;
	}

	return 0;
}