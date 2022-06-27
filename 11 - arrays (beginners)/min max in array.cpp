#include <iostream>
using namespace std;
int main() {
	int size = 5, i=0;
	int arr[5];
	cout<<"Enter the values : \n";
	for(i=0; i<size; i++) {
		cin>>arr[i];
	}
	int min=arr[0], max=arr[0];
	for(i=0; i<size; i++) {
		if(min>arr[i])
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"Minimum number is : "<<min<<endl;
	cout<<"Maximum number is : "<<max<<endl;
	return 0;
}