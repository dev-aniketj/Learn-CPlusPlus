#include <iostream>
using namespace std;

int main(){
	
	int a,b;
	cout<<"Enter first value : ";
	cin>>a;
	cout<<"Enter second value : ";
	cin>>b;
	
	auto sum = [](int x, int y) -> int{
		return x+y;
	};
	
	cout<<sum(a,b);
	
	return 0;
}