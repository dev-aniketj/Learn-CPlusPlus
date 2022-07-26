#include <iostream>
#include <queue>
using namespace std;
int main() {
	queue<int> queue1;
	
	// add elements
	queue1.push(10);
	queue1.push(20);
	queue1.push(30);
	
	// front element
	cout<<"front element : "<<queue1.front()<<endl;
	
	// rear element
	cout<<"rear element : "<<queue1.back()<<endl;
	
	// remove element
	queue1.pop();	// 20 30
	cout<<"new front ele : "<<queue1.front()<<endl;
	
	// size 
	cout<<"size of queue : "<<queue1.size()<<endl;
	
	queue1.pop();	// 30
	cout<<"new front ele : "<<queue1.front()<<endl;
	queue1.pop();	// empty - so it  prints 0
	cout<<"new front ele : "<<queue1.front()<<endl;
	
}