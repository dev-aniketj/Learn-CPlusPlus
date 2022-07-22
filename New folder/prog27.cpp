#include <iostream>
using namespace std;
void fun(int num) {
	int originalNum, rem, result = 0;
	originalNum = num;
	while(originalNum!=0) {
		rem = originalNum%10;
		result += rem*rem*rem;	//153 = pow(1,3)+pow(5,3)+pow(3,3)
		originalNum/=10;
	}
	if(result == num)
		cout<<num<<" is an Armstrong number.";
	else
		cout<<num<<" is not an Armstrong number.";
}
int main() {
	int num;
	cout<<"Enter the 3 digit number : ";
	cin>>num;
	fun(num);
	return 0;
}