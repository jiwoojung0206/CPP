
#include <iostream>

using namespace std;
    
    const double pi{3.141592};
    
    double calc_area_circle(double radius);
    void area_circle();
    
    double calc_area_circle(double radius) {
        
        return pi * radius * radius;
    }
        

int main() {
    
    area_circle();
    
    
    cout << endl;
    return 0;
}


    void area_circle() {
        double radius{};
        
        cout << "Enter the radius of the circle:";
        cin >> radius;
        cout << "The area of the circle is " << calc_area_circle(radius);
    }