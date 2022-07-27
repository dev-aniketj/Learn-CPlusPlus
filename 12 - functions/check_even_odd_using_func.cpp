#include <iostream>
using namespace std;
void checkNum(int); 	//prototype
int main() {
	checkNum(12);
	checkNum(5);
	return 0;
}
//definition
inline void checkNum(int num) {
	if(num%2==0)
		cout<<"Even"<<endl;
	else
		cout<<"Odd"<<endl;
}