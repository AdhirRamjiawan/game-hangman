//
//  WordList.cpp
//  HangMan
//
//  Created by Adhir Ramjiawan on 2023/11/15.
//

#include "WordList.hpp"

WordList::WordList()
{
    Words.push_back("cat");
    Words.push_back("dog");
    Words.push_back("house");
    Words.push_back("motorcycle");
}

string WordList::SelectWord()
{
    return Words[0];
}
