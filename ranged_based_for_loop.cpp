
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> scores{10,20,30};
    
    for (auto score:scores)
    cout << score << endl;
    
    for (auto c:"This is a test")
        if (c != ' ')
            cout << c;
    
    cout << endl;
    return 0;
}