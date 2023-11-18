//
//  WordList.cpp
//  HangMan
//
//  Created by Adhir Ramjiawan on 2023/11/15.
//

#include "WordList.hpp"
#include <cstdlib>

WordList::WordList()
{
    Words.push_back("cat");
    Words.push_back("dog");
    Words.push_back("house");
    Words.push_back("motorcycle");
}

string WordList::SelectWord()
{
    srand(time(0));
    auto randomIndex = rand() % Words.size();
    return Words[randomIndex];
}
