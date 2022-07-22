//seekg function - it is move to GET pointer to the desired location.
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream fin;
	char A[10];
	fin.open("my.txt");
	
	for(int i=0; i<10; i++)
		A[i] = 0;
	
	fin.seekg(-6, ios_base::end);
	fin.read(A, 5);
	
	for(int i=0; A[i]!=0; i++)
		cout<<A[i];
	
	fin.close();
	return 0;
}