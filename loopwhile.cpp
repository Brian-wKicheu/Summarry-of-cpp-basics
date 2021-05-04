#include <iostream>
using namespace std;

int main() {
    // Loops can execute a block of code as long as a specified condition is reached.
    // The code in the loop will run, over and over again, as long as a variable (i) is less than 5
    int i = 0;

    while (i <= 5) {
        cout << i << "\n";
        i++;
    }
    return 0;
}