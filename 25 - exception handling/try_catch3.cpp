#include <iostream>
using namespace std;

// Default catch block

int main() {
	int num1=10, num2=0;
	try {
		if(num2==0) {
//			throw "asd";
			throw 4;
		} else {
			cout<<"result : "<<num1/num2;
		}
	} catch(...) { // it can handles all kind of errors.
		cout<<"Default catch block";
	}
}