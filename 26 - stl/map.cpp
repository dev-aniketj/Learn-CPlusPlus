#include <iostream>
#include <string>
#include <map>
using namespace std;

void printMap(map<int, string>);	//prototype
int main() {

	//std::map<key, value> map_name;
	std::map<int, string> map1 = { {1, "aniket"}, {2, "ayush"}, {3, "chinmay"}};

	printMap(map1);

	cout<<"\nat () : "<<map1.at(2)<<endl;	//bound safe
	cout<<"[] : "<<map1[2]<<endl;

	// change value
	map1.at(3) = "avi";	// {3, "avi"}
	printMap(map1);

	// insert new value in map
	map1.insert(pair<int, string>(4, "chinmay"));
	printMap(map1);
	
	// another way to insert value in map
	map1.insert(make_pair(5, "chirag"));
	printMap(map1);

	// remove value from the map.
	map<int, string>::iterator i = map1.begin();
	map1.erase(i);
	printMap(map1);

	return 0;
}

// for printing the vector
void printMap(map<int, string> map1) {
	cout<<"\n----------Map----------\n";
	for(map<int, string>::iterator i = map1.begin(); i!= map1.end(); i++) {
		cout<<i->first<<" : ";		// return key
		cout<<i->second<<endl;	// return value
	}
}