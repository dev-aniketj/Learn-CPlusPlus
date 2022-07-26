// unique values and sorted
// set uses RED BLACK TREE Implementation

#include <iostream>
#include <set>
using namespace std;

void printSet(set<int> set1) {
	cout<<"\nSet : ";
	for(set<int>::iterator i = set1.begin(); i!= set1.end(); i++) {
		cout<<*i<<" ";
	}
}
int main() {
	set<int> set1 = {10,20,30,40,10,30,50};
	printSet(set1);
	
	// add values in set
	set1.insert(60);
	set1.insert(40);
	set1.insert(70);
	printSet(set1);
	
	// remove value from set
	set1.erase(10);
	set1.erase(20);
	printSet(set1);
	return 0;
}