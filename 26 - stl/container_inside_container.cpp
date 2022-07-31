#include <iostream>
#include <string>
//#include <map>
#include <vector>
using namespace std;

void printVec(vector<vector<int>> vec) {
	for(int i=0; i<vec.size(); i++) {
		for(int j=0; j<vec[i].size(); j++) {
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main() {

//	map<int, map<string, int>> map1;
//	map1.insert(new_pair(12,{"physics", 56}));

	vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, { 7, 8, 9}};
	printVec(vec);

	vec.push_back({10, 11, 12});
	printVec(vec);

	return 0;
}