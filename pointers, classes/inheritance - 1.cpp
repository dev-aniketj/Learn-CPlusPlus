//inheritance - 1
#include <iostream>
using namespace std;
class Rectangle {
	public:
		int length;
		int breadth;
		void show() {
			cout<<length<<endl;
			cout<<breadth<<endl;
		}
};
class Cuboid:public Rectangle {
	public:
		int height;
		void display() {
			show();
			cout<<height<<endl;
		}
};
int main() {
	Cuboid cube;
	cube.length=2, cube.breadth=3, cube.height=4;
	cube.display();
	return 0;
}