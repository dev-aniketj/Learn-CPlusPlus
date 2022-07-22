//tellp function - tell the position of the PUT pointer.
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int pos;
	ofstream fout;
	
	fout.open("my.txt", ios::app);
	pos = fout.tellp();
	cout<<pos<<endl;
	
	fout<<"hello world";
	pos = fout.tellp();
	cout<<pos<<endl;
	
	fout.close();
	
	return 0;
}