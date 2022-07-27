#include <iostream>
using namespace std;
int main() {
	int sum=0, i=1;
	do {
		sum += i;
		i++;
	} while(i<=4);
	cout<<"Sum is : "<<sum<<endl;
	cout<<i<<endl;
	return 0;
}