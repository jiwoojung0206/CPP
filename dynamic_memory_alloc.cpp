
#include <iostream>
#include <vector>

using namespace std;



int main() {
    
    int *int_ptr{nullptr};
    
    int_ptr = new int;
    
    cout << *int_ptr << endl;
    
    *int_ptr = 100;
    
    cout << *int_ptr << endl;
    
    delete int_ptr;
    
    cout << *int_ptr << endl;
    
    size_t size{};
    double *temp_ptr{nullptr};
    
    cout << "How many temperatures?";
    cin >> size;
    
    temp_ptr = new double[size];
    
    cout << temp_ptr << endl;
    
    delete temp_ptr;
    
    cout << endl;
    return 0;
}
