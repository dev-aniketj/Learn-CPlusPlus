//seekg function - it is move to GET pointer to the desired location.
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream fin;
	char A[100];
	fin.open("my.txt");
	
	fin.seekg(-16, ios_base::end);	//beg, cur, end
	fin.read(A, 15);
	
	// printing the data on console
	for(int i=0; A[i]!=fin.eof(); i++){
		cout<<A[i];
	}
	
	fin.close();
	return 0;
}