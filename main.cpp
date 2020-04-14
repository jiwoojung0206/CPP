
#include <iostream>

using namespace std;

int main() {
    
    int num1{};
    
    cout << "Enter an integer:";
    cin >> num1;
    
    cout << num1 << " is" << ((num1 % 2 == 0) ? " even" : " odd");
    
    cout << endl;
    return 0;
} 