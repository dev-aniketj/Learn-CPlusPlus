#include <iostream>

//PERCENTAGE OF TWO SUBJECT MARKS

using namespace std;

int main() {
	int marks1 = 95, marks2 = 88;

	float percentage;
	percentage = (float(marks1 + marks2)/200)*100;

	cout<<percentage<<endl;
}