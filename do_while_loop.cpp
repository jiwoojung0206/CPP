
#include <iostream>

using namespace std;

int main() {
    
    char selection{};
    
    do {
        cout << "\n\n--------------------\n";
        cout << "1. Do this:\n";
        cout << "2. Do that:\n";
        cout << "Press Q to quit:\n\n";
        cout << "Enter your selection:";
        
        cin >> selection;
        
        if (selection == '1')
            cout << "Doing this";
        else if (selection == '2')
            cout << "Doing that";
        else if (selection == 'q' || selection == 'Q')
            cout << "Goodbye\n";
        else cout << "Unknown option";
        
    }
    
    while (selection != 'q' && selection != 'Q');
    
    
    
    cout << endl;
    return 0;
}