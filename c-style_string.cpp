
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    
    char first_name[20];
    char last_name[20];
    char full_name[20];
    
    cout << "Enter your first name:";
    cin >> first_name;
    
    cout << "Enter your last name:";
    cin >> last_name;
    
    strcpy (full_name, first_name);
    strcat (full_name, " ");
    strcat (full_name, last_name);
    
    cout << "Your full name is " << full_name << endl;
    
    
    
    
    for (size_t i{0}; i < strlen (full_name); ++i) {
        if (isalpha (full_name[i]))
            full_name[i] = toupper(full_name[i]);
            
    }
    
    cout << full_name;
        
        
    
    
    cout << endl;
    return 0;
}