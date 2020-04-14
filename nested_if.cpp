
#include <iostream>

using namespace std;

int main() {
    
    int score{};
    char letter_grade{};
    
    cout << "Enter your score (1 - 100):";
    cin >> score;
    
    if (score <= 100 && score >= 0)
        {if (score >= 90)
            {if (score >= 95)
                cout << "A+";
            else cout << "A";}
        
        else cout << "Not A";}
        
    if (score > 100 || score < 0)
        cout << "Out of range";
        
    cout << endl;
    return 0;
}