
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string s0; 
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1, 0, 3};
    string s7(10, 'X');
    
    cout << s0 << endl;
    cout << s0.length() << endl;
    
    cout << s6 << endl;
    cout << s7 << endl;
    
    s1[0] = 'a';
    cout << s1 << endl;
    
    s1.at(0) = 'A';
    cout << s1 << endl;
    
    cout << s1.substr(0, 3) << endl;
    cout << s1.erase(0,3) << endl;
    
    string full_name{};
    
    cout << "Enter your name:";
    getline(cin, full_name);
    cout << full_name << endl;
    
    string secret{"The word is secret"};
    string word{};
    cout << "Enter a word to find:";
    cin >> word;
    
    size_t position = secret.find(word);
    if (position != string::npos)
        cout << "Found at " << position;
    else cout << "Sorry not found";
    
    
    cout << endl;
    return 0;
}