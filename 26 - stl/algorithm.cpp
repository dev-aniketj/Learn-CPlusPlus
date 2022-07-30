#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(vector<int> vec) {
	cout<<endl;
	for(vector<int>::iterator i=vec.begin(); i!=vec.end(); i++) {
		cout<< *i <<" ";
	}
	cout<<"\n--------------------------------";
}

int main() {

	vector<int> vec = {5, 2, 4, 1, 3};
	printVec(vec);

	// reverse
	reverse(vec.begin(), vec.end());
	printVec(vec);

	// sort
	sort(vec.begin(), vec.end());
	printVec(vec);

	// max, min
	cout<<endl<<"Max : "<<*max_element(vec.begin(), vec.end());
	cout<<endl<<"Min : "<<*min_element(vec.begin(), vec.end());

	// binary search - return 0(not found), 1(found)
	int ele = 4;
	if(binary_search(vec.begin(), vec.end(), ele)) {
		cout<<endl<<ele<<" is found in vector.";
	} else {
		cout<<endl<<ele<<" is not found in vector.";
	}

	// upperbound , lowerbound
	cout<<"\n\n\nVECTOR 2";
	vector<int> vec2 = { 5, 6, 7, 7, 6, 5, 5, 6 };
	vector<int>::iterator lower, upper;
	lower = lower_bound(vec2.begin(), vec2.end(), 6);
	upper = upper_bound(vec2.begin(), vec2.end(), 6);
	cout << "\nlower_bound for 6 at position "<< (lower - vec2.begin() + 1);
	cout << "\nupper_bound for 6 at position "<< (upper - vec2.begin());

	// count
	cout<<endl<<"Number of times 6 is : "<<
			count(vec2.begin(), vec2.end(), 6);
			
	// copy : it is use to copy the element from the first vector to another vector.
	
	// swap : it is use to swap the two vectors.
	
	// unique : it is use to delete the duplicate element from the given range
	vector<int>::iterator i;
	i = unique(vec2.begin(), vec2.end());
	// Resizing the vector so as to remove the undefined terms
    vec2.resize(std::distance(vec2.begin(), i));
	printVec(vec2);
	
	return 0;
}