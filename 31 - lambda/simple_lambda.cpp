#include<iostream>
using namespace std;

int main() {

	auto greeting = []() {
		cout<<"Hello World";
	};

	greeting();

	return 0;
}