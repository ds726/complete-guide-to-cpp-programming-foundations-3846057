// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int score = 1023;
    bool gamePaused = false;
    char action = 'x';
    if (score > 1000)
        std::cout << "You have a score over 1000." << std::endl;
    if (score % 2 == 0)
        std::cout << "Your score is even." << std::endl;
    else
        std::cout << "Your score is odd." << std::endl;
    std::cout << "The action '" << action << "' is";
    if (action != 'a' && action != 'w' && action != 's' &&
        action != 'd' && action != 'A' && action != 'W' && action != 'S' && action != 'D')
        std::cout << " not ";
    std::cout << "a movement key." << std::endl;
    if (gamePaused == true)
        std::cout << "The game is paused." << std::endl;
    else
        std::cout << "The game is running." << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
