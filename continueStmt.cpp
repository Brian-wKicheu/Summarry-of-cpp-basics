#include <iostream>
using namespace std;

int main() {
    /* The continue statement breaks one iteration (in the loop), 
    if a specified condition occurs, and continues with the next iteration in the loop.*/
    for (int i = 0; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << i << "\n";
    }

    return 0;
}