#include <iostream>

//DECLARE CONST VARIABLE - can't change its values.
using namespace std;

int main(){
	int temp1 = 10;
	const int temp2 = 20;
	
	temp1 = 30;
	//temp2 = 40;	//error
	cout<<temp1<<"\n"<<temp2<<endl;
	return 0;
}