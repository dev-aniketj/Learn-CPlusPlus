//tellp function - tell the position of the PUT pointer.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int pos;
	ofstream fout;
	
	fout.open("my.txt", ios::app);	//append
	pos = fout.tellp();
	cout<<pos<<endl;
	
	fout<<"helloworld";
	pos = fout.tellp();
	cout<<pos<<endl;
	
	fout.close();
	
	return 0;
}
