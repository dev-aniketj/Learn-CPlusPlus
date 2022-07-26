#include <iostream>
#include <queue>

// Priority Queue is same as Queue (replicate MAX HEAP or MIN HEAP)

using namespace std;
int main() {

//	priority_queue<object_type> queue_name;
	priority_queue<int> q1;		// MAX HEAP by default

	q1.push(6);		// 6
	q1.push(2);		// 6 2
	q1.push(10);	// 10 6 2

	cout<<"Top element : "<<q1.top()<<endl;	// 10

	q1.pop();	// 6 2
	cout<<"Top element : "<<q1.top()<<endl;

	cout<<"Size : "<<q1.size()<<endl;

//	q1.swap(q2) it use to swap the two queues.

	cout<<"-------------------------------------------"<<endl;
	priority_queue<int, vector<int>, greater<int>> q2;	//MIN HEAP

	q2.push(6);		// 6
	q2.push(2);		// 2 6
	q2.push(10);	// 2 6 10

	cout<<"Top element : "<<q2.top()<<endl;	// 2

	q2.pop();	// 6 10
	cout<<"Top element : "<<q1.top()<<endl;	// 6
	
	//size() and swap() are same in MIN HEAP.

	return 0;
}