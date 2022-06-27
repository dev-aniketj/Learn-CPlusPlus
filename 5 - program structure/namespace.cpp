#include <iostream>

namespace demo {
	int a = 5;
	void show() {
		std::cout<<"ShreyYash"<<std::endl;
	}
}
using namespace demo;
int main() {
	show();
	std::cout<<demo::a;
	return 0;
}