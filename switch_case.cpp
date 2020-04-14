
#include <iostream>

using namespace std;

int main() {
    
    char letter_grade{};
    
    cout << "Enter the letter grade you expect on the exam:";
    cin >> letter_grade;
    
    switch (letter_grade) {
    
        case 'a':
        case 'A':
            cout << "You need a 90% or above" << endl;
            break;
        
        case 'b':
        case 'B':
            cout << "You need a 80-89%" << endl;
            break;
            
        default:
            cout << "Sorry that is not a valid grade" << endl;
            break;
    } 
        
    cout << endl;
    return 0;
}