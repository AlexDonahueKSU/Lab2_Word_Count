#pragma once
#include <string>
using namespace std; 

class WordOccurrence 
{
	public:
    	WordOccurrence(const string& word="", int num=0);
        
    	bool matchWord(const string &); // returns true if word matches stored
    	void increment(); // increments number of occurrences
    	string getWord() const; 
    	int getNum() const;

	private:
    	string word_;
    	int num_;
};

class WordList
{
	public:
		WordList();
   		WordList(const WordList& other);
    	~WordList();

    	WordList& operator=(const WordList& other);
    	void addWord(const string &);
    	void printList();
	private:
 		WordOccurrence *wordArray_;                              
    	int size_;
};
