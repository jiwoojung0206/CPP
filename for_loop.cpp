
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    
    for (int i {0}; i < 10; i += 2) {
        cout << i << endl;
    }
    
    for (int i{10}; i <= 100; i += 10) {
        
        if (i % 15 == 0) cout << i << endl;
    }
    
    for (int i{0}; i <= 100; ++i) {
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }
    
    vector<int> num{10,20,30,40,50};
    for (unsigned i{0}; i < num.size(); ++i)
        cout << num.at(i) << endl;
    
    cout << endl;
    return 0;
}