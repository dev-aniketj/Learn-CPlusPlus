// a stack container is a adaptor container.

#include <iostream>
#include <stack>
using namespace std;
int main() {
	
	stack<int> stack1;
	
	stack1.push(10);
	stack1.push(20);
	stack1.push(30);
	stack1.push(40);
	stack1.push(50);	//top
	
	// top
	cout<<"Top : "<<stack1.top()<<endl;	//50
	
	// pop
	stack1.pop();	// 10 , 20
	cout<<"New Top : "<<stack1.top()<<endl;	//40
	
	// size
	cout<<"Stack Size : "<<stack1.size()<<endl;	//4
	
	return 0;
}