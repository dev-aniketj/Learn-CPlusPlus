#include <iostream>

//PRECEDENCE

int main() {
	int var1= 10, var2= 20, var3 = 30;
	float total;

	//total = ++var2 - --var3 + var1;

//	total = var2++ - var3-- + var1;
//	std::cout<<total<<std::endl;
//	std::cout<<var2<<std::endl;
//	std::cout<<var3<<std::endl;

	total = var2++ - (var3 + var1);
	std::cout<<var2<<std::endl;
	std::cout<<total;
}