//output stream - writing the data in the file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream fout;	//create stream

	fout.open("my.txt");	//load file in RAM
	//if it doesn't exist - then it will create automatically.

	fout<<"My name is Aniket.\nHello World";	//writing data into file

	fout.close();	//closing the file and save the changes.

	return 0;
}