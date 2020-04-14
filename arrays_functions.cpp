
#include <iostream>

using namespace std;

void print_array(int num[], size_t size);
void set_array(int num[], size_t size, int value);
    
void print_array(int num[], size_t size) {
    for (size_t i{0}; i < size; ++i)
        cout << num[i] << " ";
}

void set_array(int num[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        num[i] = value;
}

int main() {
    
    int test_scores[] {100, 98, 90, 84, 80};
    
    print_array(test_scores, 5); 
    cout <<  endl;
    set_array(test_scores, 5, 100);
    print_array(test_scores, 5);
    cout << endl;
    
    cout << endl;
    return 0;
}