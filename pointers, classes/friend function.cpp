//friend function
#include <iostream>
using namespace std;
class Alpha {
	private:
		int a1;
	public:
		Alpha(int a=0) {
			a1 = a;
		}
		friend void fun();
};
class Beta {
	private:
		int b1;
	public:
		Beta(int b=0) {
			b1=b;
		}
		friend void fun();
};
void fun() {
	Alpha a(8);
	Beta b(2);
	int x = a.a1+b.b1;
	cout<<"Sum : "<<x;
}
int main() {
	fun();
	return 0;
}