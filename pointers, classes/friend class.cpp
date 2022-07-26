//friend class
#include <iostream>
using namespace std;
class Alpha {
	private:
		int a1;
	public:
		Alpha(int arg=0) {
			a1=arg;
		}
		friend class Beta;
};
class Beta {
	private:
		int b1;
	public:
		Beta(int arg=0) {
			b1=arg;
		}
		int Sum() {
			Alpha a(9);
			int sum = a.a1 + b1;
			return sum;
		}
};
int main() {
	Beta b(7);
	cout<<"Sum is : "<<b.Sum();
	return 0;
}