#include <iostream>
using namespace std;

int main() {
    /* The do/while loop is a variant of the while loop. This loop will execute the code block once, 
     * before checking if the condition is true, then it will repeat the loop as long as the condition is true. */
    
    int i = 0;

    do {
        cout << i << "\n";
        i++;
    }
    while (i < 8);

    return 0;
}