
#include <iostream>

using namespace std;

int main() {
    
    int num1{};
    const int constant_1{10};
    
    cout << "Enter a number greater than or less than 10:";
    cin >> num1;
    
    if (num1 > constant_1) {
        cout << "The number is greater than " << constant_1 << endl;
        
        int diff{num1 - constant_1};
        
        cout << "The number is " << diff << " greater than " << constant_1;
        cout << endl;
    }
        
    if (num1 < constant_1)
        cout << "The number is less than " << constant_1 << endl;
        
    if (num1 == constant_1)
        cout << "The number is equal to " << constant_1 << endl;
    
    return 0;
}