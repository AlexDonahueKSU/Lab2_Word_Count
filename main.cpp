#include <cctype>
#include <fstream>
#include <iostream>
#include <string>

#include "WordList.h"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " filename\n";
        return 1;
    }

    ifstream input(argv[1]);

    if (!input)
    {
        cerr << "Could not open " << argv[1] << "\n";
        return 1;
    }

    WordList words;
    string currentWord;

    while (input >> currentWord)
    {
        string cleanedWord;

        for (char character : currentWord)
        {
            if (isalpha(char(character)))
            {
                cleanedWord += char(tolower(char(character)));
            }
        }

        if (!cleanedWord.empty())
        {
            words.addWord(cleanedWord);
        }
    }

    words.printList();
    return 0;
}
