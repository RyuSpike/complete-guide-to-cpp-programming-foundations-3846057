// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    int enemies[4];
    
    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;
    
    std::cout << "The game has 4 levels:" << std::endl;
    for(int i =0;i<4;i++){
      std::cout << "Level " << i << ": " << enemies[i] << std::endl;  
    }
    std::cout << std::endl << std::endl;
    return 0;
}
