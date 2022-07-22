//tellg function - tell the position of the GET pointer.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int pos;
	ifstream fin;
	char ch;

	fin.open("my.txt");
	pos  = fin.tellg();
	cout<<pos<<endl;

	fin>>ch;	//move pointer forward
	pos = fin.tellg();
	cout<<pos<<endl;

	return 0;
}