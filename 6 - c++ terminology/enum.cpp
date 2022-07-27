#include <iostream>
using namespace std;

enum week { Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today;
    return 0;
}