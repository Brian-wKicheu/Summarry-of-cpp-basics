#include <iostream>
using namespace std;

/*  Pass By Reference.
    You can also pass a reference to the function. 
    This can be useful when you need to change the value of the arguments:*/
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int firstNum = 10;
    int secondNum = 20;
    
    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";
    
    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);
    
    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";
    
    return 0;
}