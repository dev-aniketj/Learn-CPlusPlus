#include <iostream>
#include <string>
using namespace std;
struct phone{
	string Name;
	int RAM;
	int ROM;
	string processor;
	int camera;
	double price;
};
int main(){
	phone moto = {"moto123", 4, 16, "Snapdragon", 8, 45000};
	
//	moto.Name = "moto123";
//	moto.processor = "Snapdragon";
//	moto.price = 45000;
//	moto.RAM = 4;
//	moto.ROM = 16;
//	moto.camera = 13;
	
	cout<<"Name : "<<moto.Name<<endl;
	cout<<"Processor : "<<moto.processor<<endl;
	cout<<"Price : "<<moto.price<<endl;
	cout<<"RAM : "<<moto.RAM<<endl;
	cout<<"ROM : "<<moto.ROM<<endl;
	cout<<"Camera : "<<moto.camera<<endl;
	
	return 0;
}