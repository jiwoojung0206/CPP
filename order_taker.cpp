
#include <iostream>
#include <vector>

using namespace std;

void display_menu();
void selection(char);
void display(const vector<int> &v);
void add(vector<int> &v);
void mean(vector<int> v);
void small(vector<int> v);
void large(vector<int> v);
void quit();
void unknown();


int main() {
    
    vector<int> list{};
    char choice{};
    
    do {
    display_menu();
    selection(choice);
    switch (choice) {
        case 'P':
            display(list);
            break;
        case 'A':
            add(list);
            break;
        case 'M':
            mean(list);
            break;
        case 'S':
            small(list);
            break;
        case 'L':
            large(list);
            break;
        case 'Q':
            quit();
            break;
        default:
            unknown();
            break;
    }

}

while (choice != 'Q');

    cout << endl;
    return 0;
}

void display_menu() {
    cout << "\nP - Print numbers\n";
    cout << "A - Add numbers\n";
    cout << "M - Display mean of numbers\n";
    cout << "L - Display largest number\n";
    cout << "S - Display smallest number\n";
    cout << "Q - Quit\n" << endl;
    cout << "Enter your choice:";
}

void selection(char choice) {
    cin >> choice;
    choice = toupper(choice);
    
}

void display(const vector<int> &v) {
    
    if (v.size() == 0)
        cout << "[] - list is empty";
    else cout << "[ ";
        for (auto l:v)
            cout << l << endl;
        cout << " ]";
        
}

void add(vector<int> &v) {
    int new_number{};
    
    cout << "Type in an integer to add: ";
    cin >> new_number;
    v.push_back(new_number);
    cout << new_number << " added to the list.";
}

void mean(const vector<int> v) {
    
int sum{};
    for (auto s:v)
        sum += s;
    cout << "The mean is " << sum / v.size() << ".";

}

void small(const vector<int> v) {
    
int smallest{};
    for (size_t i{0}; i < v.size(); ++i)
        if (v.at(0) <= v.at(i))
            smallest = v.at(0);
        else smallest = v.at(i);
    cout << "The smallest number is " << smallest << ".";
}

void large(const vector<int> v) {
    int largest{};
    for (size_t i{0}; i < v.size(); ++i)
        if (v.at(0) >= v.at(i))
            largest = v.at(0);
        else largest = v.at(i);
    cout << "The largest number is " << largest << ".";
}

void quit() {
    false;
}

void unknown() {
    cout << "Unknown input try again...";
}