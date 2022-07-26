//operator overloading using friend function
#include <iostream>
using namespace std;
class Person {
	private:
		int weight;
	public:
		Person(int w = 0) {
			weight = w;
		}

		friend bool operator > (Person p1, Person p2);		// prototype
		friend bool operator < (Person p1, Person p2);		// prototype
		friend bool operator == (Person p1, Person p2) {	
			return (p1.weight==p2.weight);
		}
};
bool operator > (Person p1, Person p2) {					// definition
	return p1.weight > p2.weight;
}
bool operator < (Person p1, Person p2) {					// definition
	return p1.weight < p2.weight;
}
int main() {
	int w1, w2;
	cout<<"Enter the weight of Aniket : ";
	cin>>w1;
	cout<<"Enter the weight of Ayush : ";
	cin>>w2;

	Person person1(w1), person2(w2);

	if(person1 > person2) {
		cout<<"\nAniket is Heavy";
	} else if(person1 < person2) {
		cout<<"\nAyush is Heavy";
	} else if(person1 == person2) {
		cout<<"\nBoth Weights are Equal.";
	}
	return 0;
}