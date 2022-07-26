//tellg function - tell the position of the GET pointer.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	
	ifstream fin;
	char ch;
	int pos;

	fin.open("my.txt");
	pos = fin.tellg();
	cout<<pos<<endl;

	fin>>ch;	//move pointer forward
	pos = fin.tellg();
	cout<<pos<<endl;
	
	fin.close();

	return 0;
}