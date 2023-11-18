//
//  WordList.hpp
//  HangMan
//
//  Created by Adhir Ramjiawan on 2023/11/15.
//

#ifndef WordList_hpp
#define WordList_hpp

#include <stdio.h>

#include <vector>
#include <string>

using namespace std;

class WordList
{
public:
    vector<string> Words;
    WordList();
    string SelectWord();
};


#endif /* WordList_hpp */
