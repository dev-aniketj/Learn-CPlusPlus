#include <iostream>
#include <string>
using namespace std;

int main() {
	int size = 10;
	string name[size] = {"Avi", "Ayush", "Yesh"};
	for(int i=0; i<size; i++) {
		cout<<name[i]<<endl;
	}
}