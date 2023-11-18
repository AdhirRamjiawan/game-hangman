//
//  Game.cpp
//  HangMan
//
//  Created by Adhir Ramjiawan on 2023/11/15.
//

#include <iostream>

#include "Game.hpp"


Game::Game()
{
    Reset();
}

void Game::Reset()
{
    SelectedWord = GameWordList.SelectWord();
    GuessCount = 0;
    GuessAnswer = "";
    
    for (auto letter : SelectedWord)
    {
        GuessAnswer += "_";
    }
}

bool Game::IsGameOver()
{
    // 6 for each body part of the man being hanged
    return IncorrectGuessCount >= 6 || GuessAnswer.find("_") == string::npos;
}

bool Game::PlayerWon()
{
    return IncorrectGuessCount < 6;
}

void Game::MakeGuess(char letter)
{
    auto charPos = SelectedWord.find(letter);
    GuessCount++;
    
    if (charPos == string::npos)
    {
        IncorrectGuessCount++;
        return;
    }
    
    UpdateGuessAnswer(letter);
}

unsigned long Game::GetSelectedWordLength()
{
    return SelectedWord.length();
}

void Game::UpdateGuessAnswer(char letter)
{
    // for every guess print out parts of the selected word
    for (int i = 0; i < SelectedWord.length(); i++)
    {
        if (letter == SelectedWord[i])
        {
            GuessAnswer[i] = letter;
        }
    }
    
    std::cout << GuessAnswer << std::endl;
}
