// Reverse the result, returns false if the result is true
#include <iostream>
using namespace std;

int main() {
	int x = 5;
	int y = 3;
	
	cout << (!(x > y && y < x)); // returns false (0) because ! (not) is used to reverse the result
	
	return 0;
}