//
//  main.cpp
//  HangMan
//
//  Created by Adhir Ramjiawan on 2023/11/15.
//

#include <iostream>

#include "Game.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hang man" << std::endl;
    Game g;
    string input = "";
    
    while(!g.IsGameOver())
    {
        std::cout << std::endl << "Please enter a letter: ";
        std::cin >> input;
        g.MakeGuess(input[0]);
    }
    
    if (g.PlayerWon())
    {
        std::cout << "Good work! You've guessed correctly!! Long Live The Man!!!" << endl;
    }
    else
    {
        std::cout << "The man was hanged!!" << endl;
    }
    
    return 0;
}


