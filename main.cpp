
#include <iostream>
#include <vector>

using namespace std;



int main() {
    
    int num{10};
    
    cout << num << endl;
    cout << sizeof num << endl;
    cout << &num << endl;
    
    int *num_pointer{nullptr};
    
    num_pointer = &num;
    
    cout << &num << endl;
    cout << num_pointer << endl;
    cout << *num_pointer << endl;
    
    vector<string> names{"Jiwoo", "Joanne", "Jessica"};
    vector<string> *names_ptr{nullptr};
    
    names_ptr = &names;
    
    cout << (*names_ptr).at(0) << endl;
    
    for (auto list:*names_ptr)
        cout << list << endl;
    
    cout << endl;
    return 0;
}