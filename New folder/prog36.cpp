#include <iostream>
using namespace std;
class Test {
	private:
		int data;
	public:
		//setter
		void setData(int x) {
			data = x;
		}
		//getter
		int getData() {
			return data;
		}
};

int main() {
	Test *obj;			//create object pointer of a Test class - WILD Pointer of obj
	obj = new Test[2];	//pointer points to an object of array.

	//set Data
	obj->setData(10);
	(obj+1)->setData(15);

	//get Data
	cout<<obj->getData()<<endl;
	cout<<(obj+1)->getData()<<endl;
}