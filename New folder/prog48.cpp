//constructor - 2  
#include <iostream>
#include <string>
using namespace std;
class Mobile {
	private:
		string name;
		int ram;
		string processor;
		int battery;
	public:
		Mobile(string name="null", int ram=0,string processor = "null", int battery=0) {
			this->name = name;
			this->ram = ram;
			this->processor = processor;
			this->battery = battery;
		}
		Mobile(Mobile &mob) {
			name = mob.name;
			ram = mob.ram;
			processor = mob.processor;
			battery = mob.battery;
		}
		void getData();
};
void Mobile::getData() {
	cout<<"Name : "<<name<<endl;
	cout<<"RAM : "<<ram<<endl;
	cout<<"Processor : "<<processor<<endl;
	cout<<"Battery : "<<battery<<endl<<endl;
}
int main() {
	
	Mobile mobile1("Remdi 4A", 3, "Snapdragon Core", 24000);
	Mobile mobile2(mobile1), mobile3;
	
	mobile1.getData();
	mobile2.getData();
	mobile3.getData();
	
	return 0;
}