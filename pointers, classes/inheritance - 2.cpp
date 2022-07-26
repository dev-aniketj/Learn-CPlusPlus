//inheritance - 2
#include <iostream>
using namespace std;
class Rectangle {
	public:
		int length,breadth;
		void area() {
			cout<<"Area of Rectangle : "<<length*breadth<<endl;
		}
};
class Cuboid: public Rectangle {
	public:
		int height;
		void volume() {
			cout<<"Area of Cube : "<<length*breadth*height<<endl;
		}
};
int main() {
	Cuboid cube1;
	cube1.length=2, cube1.breadth=3, cube1.height=4;
	cube1.area();
	cube1.volume();
	return 0;
}