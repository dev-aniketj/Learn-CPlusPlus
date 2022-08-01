#include <iostream>
#include <thread>
using namespace std;

int main() {

	// [] arg -> return_type {definition};

	thread t1([] { cout<<"Hello"<<endl; });
	thread t2([] { cout<<"World"<<endl; });

	if(t1.joinable()) { 	// checking it is safe or not
		t1.join();
	}

	if(t2.joinable()) { 	// checking it is safe or not
		t2.join();
	}

	return 0;
}