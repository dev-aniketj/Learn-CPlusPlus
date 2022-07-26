// it is having duplicate key value pair.
// we can add or del data, but can't modify the data.

#include <iostream>
#include <string>
#include <map>
using namespace std;

void printMap(multimap<int, string> map1) {
	cout<<"\n----------Map----------\n";
	for(multimap<int, string>::iterator i = map1.begin(); i!= map1.end(); i++) {
		cout<<i->first<<" : ";		// return key
		cout<<i->second<<endl;		// return value
	}
}

int main() {

	multimap<int, string> mmap1 = {
		{1,"aniket"},
		{2, "ayush"},
		{2, "chinmay"},
		{3, "chirag"}
	};
	printMap(mmap1);

	// insert values in multimap
	mmap1.insert(pair<int, string>(4, "abhishek"));
	mmap1.insert(make_pair(5, "sheena"));
	printMap(mmap1);

	// remove value from multimap
	multimap<int, string>::iterator i = mmap1.begin();
	mmap1.erase(i);
	printMap(mmap1);
												
	// count() - it is use to count the matching values.
	cout<<endl<<mmap1.count(2);	// ayush, chinmay (2)		
	cout<<endl<<mmap1.count(4);	// abhishek	(1)

	return 0;
}