#include<iostream>
using namespace std;
void add(int,int);
void add(float,float);
int main() {
	add(10,5);		//int add
	add(10.5f, 5.5f);	//float add
	return 0;
}
void add(int a, int b) {
	cout<<a+b<<endl;
}
void add(float a, float b) {
	cout<<a+b<<endl;
}