
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int);
void print(string);
void print(double);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << num << endl;
}

void print(double num) {
    cout << num << endl;
}

void print(string s) {
    cout << s << endl;
}

void print(string s, string p) {
    cout << s + " " + p << endl;
}

void print(vector<string> vec) {
    for (auto v:vec)
        cout << v << endl;
}

int main() {
    
    print(100);
    print(125.5);
    print("Hello");
    print("Hello", "Jiwoo");
    
    vector<string> names{"Jiwoo", "Joanne", "Jessica"};
    print(names);
    
    cout << endl;
    return 0;
}