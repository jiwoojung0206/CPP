
#include <iostream>

using namespace std;

int main() {
    
    int num{};
    
    cout << "Enter an integer less than 100:";
    cin >> num;
    
    while (num >= 100) {
        cout << "Enter an integer less than 100:";
        cin >> num;
    }
    
    cout << "Thanks" << endl;
    
    bool done{false};
    int number{};
    
    while (!done) {
        cout << "Enter an integer between 1 and 10:";
        cin >> number;
        
        if (number <= 1 || number >= 10)
            cout << "Try again" << endl;
            
        else {cout << "Thanks";
        done = true;
        }
    }
    
    
    cout << endl;
    return 0;
}