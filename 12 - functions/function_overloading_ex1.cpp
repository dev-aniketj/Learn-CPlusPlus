#include<iostream>
using namespace std;
void add(int,int);
void add(int,float);
int main() {
	add(10,5);			//int add
	add(10, 5.5f);	//float add
	return 0;
}
void add(int a, int b) {
	cout<<a+b<<endl;
}
void add(int a, float b) {
	cout<<a+b<<endl;
}