#include <iostream>
using namespace std;
const int MAX = 5;
void printArray(int*);
int main() {
	int number[MAX] = {10,20,30,40,50};
	printArray(number);
	return 0;
}
void printArray(int *ptr) {
	for(int i=0; i<MAX; i++) {
		cout<<*ptr++<<endl;
	}
}