
#include <iostream>
#include <vector>
#include <string>

using namespace std;

    void pass_by_value1(int num);
    void pass_by_value2(string s);
    void pass_by_value3(vector<string> v);
    void print_vector(vector<string> v);
    
    void pass_by_value1(int num) {
        num = 1000;
    }
    
    void pass_by_value2(string s) {
        s = "changed";
    }
    
    void pass_by_value3(vector<string> v) {
        v.clear();
    }
    
    void print_vector(vector<string> v) {
        for (auto s:v)
            cout << s << " ";
    }


int main() {
    
    int num{10};
    
    cout << "Number before pass by value 1 is " << num << endl;
    pass_by_value1(num);
    cout << "Number after pass by value 1 is " << num << endl;
   
    string name{"Jiwoo"};
   
    cout << "String before pass by value 2 is " << name << endl;
    pass_by_value2(name);
    cout << "String after pass by value 2 is " << name << endl;
   
    vector<string> names{"Jiwoo", "Joanne", "Jessica"};
   
    cout << "Names before pass by value 3: ";
    print_vector(names);
    cout << endl;
    pass_by_value3(names);
    cout << "Names after pass by value 3: ";
    print_vector(names);
    
    cout << endl;
    return 0;
}