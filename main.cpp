
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    vector<int> primes{};

    cout << "Prime numbers up to: ";
    cin >> num;
    
    for (size_t i{1}; i <= num; ++i) {
        vector<int>factors{};
        
        for (size_t z{1}; z <= i; ++z) {
            if (i % z == 0) 
                factors.push_back(z);
        }
            if (factors.size() == 2)
                primes.push_back(i);
        
            
        }
    
    
    for (auto p:primes) {
        cout << p << endl;
    }
}