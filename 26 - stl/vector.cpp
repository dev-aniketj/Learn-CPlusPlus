#include <iostream>
#include <vector>
using namespace std;

// for printing the vector
void printVec(vector<int> vector2) {
	cout<<"\nVector : ";
	for(vector<int>::iterator i = vector2.begin(); i!= vector2.end(); i++) {
		cout<<*i<<" ";
	}
}

int main() {


	vector<int> vector1;
	cout<<vector1.size()<<endl;	//intial size of vector is 0

	std::vector<int> vector2 = {10,20,30};
	cout<<vector2.at(1)<<endl;		//out of bound safe
	cout<<vector2[2]<<endl;			// unsafe

	vector2.push_back(40);
	vector2.push_back(50);
	vector2.push_back(60);
	printVec(vector2);

	vector2.pop_back();
	printVec(vector2);

	vector<int>::iterator i = vector2.begin();
	vector2.insert(i,70);	//it insert element at the begin of the vector.
	printVec(vector2);
	
	vector2.erase(i);		//erase or delete the element where the iterator is located.
	vector2.erase(i);
	printVec(vector2);
	
	cout<<"\ncapacity of vector2 is : "<<vector2.capacity()<<endl;
	// it will return how much element we can store in it.


}
