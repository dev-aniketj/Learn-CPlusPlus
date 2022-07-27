#include <iostream>
using namespace std;
int main() {
	int x, y;
	for (x = 0; x < 5; x++) {
		for (y = 0; y < x + 1; y++) {
			cout << "* ";
		}
		cout << endl;
	}
	cout << "\n";
	for (x = 0; x < 5; x++) {
		for (y = 5; y > x; y--) {
			cout << "* ";
		}
		cout << endl;
	}
}