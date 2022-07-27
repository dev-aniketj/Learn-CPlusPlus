#include <iostream>
using namespace std;

namespace demo {
	int a = 5;
	void show() {
		std::cout<<"ShreyYash"<<std::endl;
	}
}

int main() {
	demo::show();
	cout<<demo::a;
	return 0;
}