#include <iostream>
using namespace std;
inline int sum(int x=0, int y=0) {
	return x+y;
}
int main() {
	cout<<"Sum is : "<<sum(50);
	return 0;
}