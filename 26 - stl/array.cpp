#include <iostream>
#include <array>
using namespace std;

int main() {
//	Array declaration
	std::array<int, 10> array1;

//	Array intialization
	std::array <int, 10> array2 = {10,20,30};

//	methods
	cout<<"At "<<array2.at(1)<<endl;	//20
	cout<<"[] "<<array2[2]<<endl;		//30
	cout<<"front() "<<array2.front()<<endl;	//return first element
	cout<<"back() "<<array2.back()<<endl; 	//return last element

	array2.fill(1);	//fill array with 1
	array2.swap(array1);

	cout<<"size() "<<array2.size()<<endl;
	cout<<"max_size() "<<array2.max_size()<<endl;

	return 0;
}