#include <iostream>
#include <thread>
using namespace std;

void thread1(int start, int end) {
	for(int i=start; i<=end; i++) {
		cout<<"Hello"<<endl;
	}
}
void thread2(int start, int end) {
	for(int i=start; i<=end; i++) {
		cout<<"Bye"<<endl;
	}
}

int main() {
	
	thread fun1(thread1, 1, 100);
	thread fun2(thread2, 1, 100);
	
	fun1.join();
	fun2.join();

	return 0;
}