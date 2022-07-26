#include <iostream>
#include <string>
using namespace std;

// template func

template <class T> T sum(T x, T y) {
	return x+y;
}

int main() {

	cout<<sum<int>(4, 2)<<endl;
	cout<<sum<double>(4.21, 5.4)<<endl;
	cout<<sum<string>("aniket ", "jain")<<endl;
	cout<<sum<float>(3.34f, 54.23f)<<endl;

	return 0;
}