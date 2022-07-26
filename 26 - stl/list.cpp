#include <iostream>
#include <list>
using namespace std;
int main() {
	//declaration
	std::list<int> list1;

	//initialization
	std::list<int> list2 = {10,20,30};

	//methods

	list2.insert(list2.begin(),5);	// 5 10 20 30
	cout<<endl;
	for(list<int>::iterator i=list2.begin(); i!= list2.end(); i++) {
		cout<<*i<<" ";
	}

	list2.push_back(40);	// 5 10 20 30 40
	list2.push_front(0);	// 0 5 10 20 30 40
	cout<<endl;
	for(list<int>::iterator i=list2.begin(); i!= list2.end(); i++) {
		cout<<*i<<" ";
	}
	
	list2.pop_back();	// 0 5 10 20 30
	list2.pop_back();	// 0 5 10 20
	list2.pop_front();	// 5 10 20
	cout<<endl;	
	for(list<int>::iterator i=list2.begin(); i!= list2.end(); i++) {
		cout<<*i<<" ";
	}

	list2.reverse();	// 20 10 5
	cout<<endl;
	for(list<int>::iterator i=list2.begin(); i!= list2.end(); i++) {
		cout<<*i<<" ";
	}

	list2.swap(list1);	//swap the elements of two lists, now list2 is empty.
	cout<<endl;
	for(list<int>::iterator i=list1.begin(); i!= list1.end(); i++) {
		cout<<*i<<" ";
	}

//	list1.sort();
//	list1.megre(list2);
//	cout<<endl;
//	for(list<int>::iterator i=list1.begin(); i!= list1.end(); i++) {
//		cout<<*i<<" ";
//	}

	
}