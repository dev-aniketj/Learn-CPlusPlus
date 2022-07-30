// can't have duplicate <KEY,VALUE> pairs
// insert, delete, modify KEY, VALUE

#include <iostream>
#include <unordered_map>
using namespace std;

void printMap(unordered_map<int, string> map) {
	unordered_map<int, string> :: iterator i = map.begin();
	for(i; i!=map.end(); i++) {
		cout<< i->first	<<" : ";
		cout<< i->second<< endl;
	}
	cout<<"---------------------------------------\n";
}

int main() {

	unordered_map<int, string> map = {{1,"aniket"}, {2, "ayush"}, {3, "avi"}, {4, "chinmay"}};
	printMap(map);

	// change
	map[2] = "chirag";
	map[1] = "yesh";
	printMap(map);

	//insert
	map.insert(pair<int, string>(5, "aniket"));
	printMap(map);
	
	//erase
	unordered_map<int, string> :: iterator i = map.begin();
	map.erase(i);	// 5, aniket
	map.erase(2);	// 2, chirag
	printMap(map);
	
	// swap : it is use to swap to two unordered maps.
	
	// clear : it is use to delete all the elements from the unordered map.
	
	// count : return no of elements matching with given key.
	cout<< "Count of 3 : "<< map.count(3) << endl;
	
	// size : return the size of the unordered map.
	cout<< "Size of map : "<< map.size() << endl;

	return 0;
}