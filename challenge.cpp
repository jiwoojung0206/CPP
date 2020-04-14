
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"TUVWXYZabcdefghijklmnopQRStuvwxyzABCDEFGHIJKLMNOP"};
    
    string secret_message{};
    
    cout << "Enter a secret message: "; 
    getline (cin, secret_message);
    
    string encrypted_message{};
    
    cout << "ENCRYPTING MESSAGE...";
    
    for (char c: secret_message) {
        size_t position = alphabet.find(c);
            if (position != string::npos) {
                char new_char{key.at(position)};
                encrypted_message = new_char;
                    
            }
            
            else encrypted_message = c;
        
        cout << encrypted_message;
    }  
    
    
    cout << endl;
    return 0;
}