#include<iostream>
using namespace std;
class Car {
	private:
		int weight;
	public:
		void setWeight(int w=0) {
			weight = w;
		}
		int getWeight() {
			return weight;
		}
};
class BMW {
	private:
		int topSpeed;
		Car *ptr;		//pointer object of Car class - NULL Pointer
	public:
		//Parameterized Constructor
		BMW(int weight = 0, int tSpeed = 0) {
			ptr = new Car;
			ptr->setWeight(weight);
			topSpeed = tSpeed;
		}
		int getWeight() {
			return ptr->getWeight();
		}
		int getTopSpeed() {
			return topSpeed;
		}
		//Destructor
		~BMW() {
			delete ptr;
			cout<<"Destructor"<<endl;
		}
};
int main() {
	BMW b(3000, 350);

	cout<<"Weight of a car : "<<b.getWeight()<<endl;
	cout<<"Top Speed of a car : "<<b.getTopSpeed()<<endl;

	return 0;
}