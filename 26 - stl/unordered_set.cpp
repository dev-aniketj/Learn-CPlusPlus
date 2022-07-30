// unique element

#include <iostream>
#include <unordered_set>
using namespace std;

void printSet(unordered_set<int> set) {
	for(unordered_set<int>::iterator i = set.begin(); i!=set.end(); i++) {
		cout<< *i << " ";
	}
	cout<<endl;
}

int main() {

	unordered_set<int> u_set = {40, 10, 10, 30, 30, 20, 40, 50, 20};
	printSet(u_set);
	
	// insert
	u_set.insert(60);
	printSet(u_set);
	
	// remove or delete element
	u_set.erase(30);
	u_set.erase(10);
	printSet(u_set);
	
	// swap : it is use to swap the unordered set
	
	// size
	cout<<"Size : "<<u_set.size()<<endl;

	return 0;
}