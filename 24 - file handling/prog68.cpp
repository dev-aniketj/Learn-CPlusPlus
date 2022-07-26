//input stream - read the data from the file.
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream fin;		//create input stream
	char ch;		//variable for storing GET pointer character

	fin.open("my.txt");	//load file in RAM
	//if it doesn't exist - then it will give an error.
	fin>>ch;		//storing 1st GET pointer value into ch variable.

	while(!fin.eof()) {	//iterate till END OF FILE
		cout<<ch;	//print the value at first index (1st character).
		fin>>ch;	//move the GET pointer forward.
	}

	fin.close();		//close the file.

	return 0;
}
