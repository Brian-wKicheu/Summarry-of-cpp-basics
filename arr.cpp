#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Arrays are used to store multiple values in a single variable, instead of declaring separate 
    variables for each value. */

    int nums[5] = {1, 2, 3, 4, 5};
    cout << "I want to buy car number: " << nums[2] << ".\n";

    string cars[5] = {"BMW", "Audi", "Mercedes Benz", "Volkswagen", "Ford Mustang"};
    cout << cars[2] << "\n";

    // change array element: replace 'Ford Mustang'
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }

    cars[4] = "Range Rover";

    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }

    return 0;
}