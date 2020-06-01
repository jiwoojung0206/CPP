#include <iostream>
#include "mystring.h"


int main() {
    
    Mystring Jiwoo;
    Mystring Hero("");
    Mystring Joanne("Joanne");
    Mystring Jessica{Joanne};
    
    
    Jiwoo.display();
    Hero.display();
    Joanne.display();
    Jessica.display();
    
    std::cout << std::endl;
    return 0;
}
