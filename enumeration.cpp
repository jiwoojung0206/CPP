
#include <iostream>

using namespace std;

int main() {
    
    enum direction{right, left, up, down};
    
    direction heading{left};
    
    
    switch(heading){
        case left:
            cout << "Going left";
            break;
        case right:
            cout << "Going right";
            break;
        default:
            cout << "Neither left nor right";
            break;
    }
    

    cout << endl;
    return 0;
}