#include <iostream>
using namespace std;
void sum(int,int);	//declare (prototype)
int square(int);	//declare (prototype)
int main() {
	int a=5,b=10;
	sum(a,b);
	cout<<endl<<"Square is : "<<square(5);
	return 0;
}
//define
void sum(int a, int b) {
	cout<<"Sum is : "<<a+b;
}
//define
int square(int x) {
	return x*x;
}