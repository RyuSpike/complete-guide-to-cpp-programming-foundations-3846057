// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4

int main(){
    const size_t LEVEL_COUNT =4;
    int enemies[LEVEL_COUNT];
    float level_difficulty[] = {1.0, 3.5, 6.0, 10.5};
    
    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;
    
    std::cout << "The game has " << LEVEL_COUNT << " levels:" << std::endl;
    for(int i =0;i<LEVEL_COUNT;i++){
      std::cout << "Level " << i << ": " << enemies[i] << " enemies" << std::endl;  
    }

    std::cout << std::endl << "Level difficulties are set as follows:" << std::endl;
    for(int i =0;i<4;i++){
      std::cout << "Level  " << i << ": " << level_difficulty[i] << std::endl;  
    }
    std::cout << std::endl << std::endl;
    return 0;
}
