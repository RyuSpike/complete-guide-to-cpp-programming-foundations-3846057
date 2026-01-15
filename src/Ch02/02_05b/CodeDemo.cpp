// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>
int i_am_a_global_variable = 4; //best practice is to avoid using these.

int main(){
    int a = 7; 
    int b = 7;
    int c = a * b; //local variables
    float d = a/b;
    bool flag = true;
    std::cout << "a = " << a << std::endl 
    << "b = " << b << std::endl <<
    "c = " << c << std::endl << 
    "d = " << d << std::endl << flag << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
