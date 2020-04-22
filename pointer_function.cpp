
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void display(int *array, int sentinel) {
    while (*array != sentinel) 
        cout << *array++ << endl;
}

int main() {
    
    int scores[] {100,98,95,90,88,10};
    
    display(scores, 10);
    
    
    cout << endl;
    return 0;
}
