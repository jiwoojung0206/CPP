
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    char choice{};
    vector<int> lists{};
    
    do {
    cout << "\nP - Print numbers\n";
    cout << "A - Add numbers\n";
    cout << "M - Display mean of numbers\n";
    cout << "L - Display largest number\n";
    cout << "S - Display smallest number\n";
    cout << "Q - Quit\n" << endl;
    cout << "Enter your choice:";
    
    cin >> choice;
    
    
    if (choice == 'p' || choice == 'P') {
        cout << "[ ";
                if (lists.size() == 0)
                    cout <<" ] - the list is empty\n";
                else {for (auto list:lists) {
                    cout << list << " ";
                }
        cout << "]";
                }
        
    } 
    
    if (choice == 'a' || choice == 'A') {
        int new_number{};
        cout << "Enter a number to add:";
        cin >> new_number;
        
        lists.push_back(new_number);
        
        cout << new_number << " added to the list\n";
    }
        
    if (choice == 'm' || choice == 'M') {
        double sum{0.0};
            for (int i{0}; i < lists.size(); ++i)
                sum = sum + lists.at(i);
        cout << "The mean of the list is " << sum / lists.size() << endl;
    }
    
    
    if (choice == 's' || choice == 'S') {

    int small{};
        
            for (int j{0}; j < lists.size(); ++j) 
                
                if (lists.at(0) <= lists.at(j)) 
                    small = lists.at(0);
                else small = lists.at(j);
                
        cout << small << " is the smallest number\n";
    }
    
    
    if (choice == 'l' || choice == 'L') {

        int big{};

            for (int j{0}; j < lists.size(); ++j) 
                
                if (lists.at(0) >= lists.at(j)) 
                    big = lists.at(0);
                else big = lists.at(j);
                
        cout << big << " is the largest number\n";
    }
    
    
    else cout << "Unknown input try again...\n";
    
    }

    while (choice != 'q' && choice != 'Q');
    
    cout << endl;
    return 0;
}