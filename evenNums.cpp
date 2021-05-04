#include <iostream>
using namespace std;

int main() {
    // Odd nums
    cout << "Odd numbers.\n";
    for (int i = 1; i <= 10; i = i+2) {
        cout << i << "\n";
    }

    // Even nums
    cout << "Even numbers.\n";
    for (int j = 0; j <= 10; j = j+2) {
        cout << j << "\n";
    }

    return 0;
}