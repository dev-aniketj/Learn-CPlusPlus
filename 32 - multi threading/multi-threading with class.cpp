#include <iostream>
#include <thread>
using namespace std;

class Test{
	public:
		void thread1(int start, int end){
			for(int i=start; i<=end; i++){
				cout<<"Hi"<<endl;
			}
		}
		void thread2(int start, int end){
			for(int i=start; i<=end; i++){
				cout<<"Bye"<<endl;
			}
		}
};

int main() {
	
	Test obj;
	
	thread th1(&Test::thread1, &obj, 1, 20);
	thread th2(obj.thread2, &obj, 10, 20);
	
	th1.join();
	th2.join();

	return 0;
}