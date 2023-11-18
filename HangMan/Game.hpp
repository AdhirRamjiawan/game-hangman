//
//  Game.hpp
//  HangMan
//
//  Created by Adhir Ramjiawan on 2023/11/15.
//

#ifndef Game_hpp
#define Game_hpp

#include "WordList.hpp"

#include <string>
#include <stdio.h>

class Game
{
public:
    Game();
    void Reset();
    void MakeGuess(char letter);
    unsigned long GetSelectedWordLength();
    unsigned short GuessCount;
    unsigned short IncorrectGuessCount;
    string GuessAnswer;
    bool IsGameOver();
    bool PlayerWon();
    
    
private:
    WordList GameWordList;
    string SelectedWord;
    void UpdateGuessAnswer(char letter);
};

#endif /* Game_hpp */
