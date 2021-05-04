#include <iostream>
using namespace std;

int main() {
    // Break statement can be used to jump out of a loop
    for (int i = 0; i <= 10; i++) {
        if (i == 6) {
            break;
        }

        cout << i << "\n";
    }
    return 0;
}