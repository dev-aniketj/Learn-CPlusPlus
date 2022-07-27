#include <iostream>
#include <string>
using namespace std;

//template class

template <class T>
class Demo {
	private:
		T x;
		T y;
	public:
		void getData(T x, T y) {
			this->x = x;
			this->y = y;
		}
		void add() {
			cout<<"Addition : "<<x+y<<endl;
		}
};

int main() {
	Demo<int> demo1;
	demo1.getData(10, 20);
	demo1.add();

	Demo<double> demo2;
	demo2.getData(4.5, 5.42);
	demo2.add();

	Demo<string> demo3;
	demo3.getData("Hello ", "World");
	demo3.add();

}