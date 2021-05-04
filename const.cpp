//You should always declare the variable as constant when you have values that are unlikely to change:
#include <iostream>
using namespace std;

int main () {
	const int min_per_hour = 60;
	const float PI = 3.14;
	
	cout << "Minutes in a day: " << (min_per_hour * 24) << " mins\n";
	cout << "PI: " << PI << "\n";
	
	return 0;
}
