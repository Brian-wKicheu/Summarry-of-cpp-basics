#include <iostream>
#include <cmath> //math lib
using namespace std;

// C++ has many functions that allows you to perform mathematical tasks on numbers.

// Max and min

int main() {

    cout << "Maximum num: " << max(5,23) << "\n";
    cout << "Minimum num: " << min(5,23) << "\n";

    /* Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), 
    can be found in the <cmath> */
    cout << "Square root of 64: " << sqrt(64) << "\n";
    cout << "Round '4.7': " << round(4.7) << "\n";
    cout << "Logarithm of 2: " << log(2) << "\n";

    return 0;
}