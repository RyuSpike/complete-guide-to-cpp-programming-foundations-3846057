// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character{
    std::string name;
    int level;
    character_role role;
};

int main(){
    
    game_character buddy;
    buddy.name = "Tommy Vercetti";
    buddy.level = 999;
    buddy.role = character_role::protagonist;

    std::cout << buddy.name << " is a level " << buddy.level << " at the end of GTA Vice City if it had exp points lol. his role is " <<  (int) buddy.role << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
