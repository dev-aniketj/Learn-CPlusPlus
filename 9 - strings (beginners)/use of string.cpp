#include <iostream>
#include <string>

//USE OF STRING

using namespace std;
int main() {
	string firstName = "Aniket";
	string lastName = "Jain";

	string fullName = firstName+" "+lastName;		//Slow, compared to append() string concatenation
	string Name = firstName.append(" # "+lastName);	//Fast

	cout<<fullName<<endl;
	cout<<Name<<endl;
}