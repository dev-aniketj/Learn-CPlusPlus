//nested struct
#include <iostream>
#include <string>
using namespace std;

struct camera {
	int front;
	int rear;
};
struct phone {
	string name;
	string processor;
	int RAM;
	int ROM;
	camera c;
};
int main() {
	phone moto;

	moto.name = "moto123";
	moto.processor = "Snapdragon";
	moto.RAM = 4;
	moto.ROM = 16;
	moto.c.front = 13;
	moto.c.rear = 16;

	cout<<"Name : "<<moto.name<<endl;
	cout<<"Processor : "<<moto.processor<<endl;
	cout<<"RAM : "<<moto.RAM<<endl;
	cout<<"ROM : "<<moto.ROM<<endl;
	cout<<"Camera Front : "<<moto.c.front<<endl;
	cout<<"Camera Rear : "<<moto.c.rear<<endl;

	return 0;
}