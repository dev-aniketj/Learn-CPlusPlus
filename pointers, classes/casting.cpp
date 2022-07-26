#include <iostream>
using namespace std;
int main() {
	float var1 = 65.231f;
	int var2 = static_cast<int>(var1);		//int(var1)
	char var3 = static_cast<char>(var2);	//char(var2)
	//int var2 = (int)var1;
	cout<<var2<<endl;
	cout<<var3;
}