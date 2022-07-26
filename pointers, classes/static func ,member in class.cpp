//static function and static variable in class

#include <iostream>
using namespace std;
class Alpha {
	private:
		int a, b;
	public:
		Alpha() {
			a=5;
			b=5;
		}
		static int c;
		static int getC() {
			c++;
			return c;
		}
};
int Alpha::c = 0;
int main() {
	cout<<Alpha::c<<endl;
	Alpha::getC();
	cout<<Alpha::c<<endl;
	Alpha::getC();
	cout<<Alpha::c<<endl;
	return 0;
}