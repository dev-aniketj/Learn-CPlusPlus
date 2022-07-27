//seekp function - it is move to PUT pointer to the desired location.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream fout;
	char A[10] = "aniket";
	fout.open("my.txt", ios::in);	// out, app, in
	fout.seekp(3, ios_base::beg);	// beg, cur, end

	fout.write(A, 6);	//replace, write the text on the pervious text.
	fout.close();
	return 0;
}