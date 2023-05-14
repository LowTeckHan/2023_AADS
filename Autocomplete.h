#ifndef Autocomplete_H
#define Autocomplete_H
#include <vector>
#include <string>

class Autocomplete
{
public:
	Autocomplete();
	std::vector<std::string> getSuggestions(std::string partialWord);  // return the known words that start with partialWord
	void insert(std::string word); // add a word to the known words
	struct TrieNode;
	TrieNode * root;
	void traverse(TrieNode * node, std::string& partialWord, std::vector<std::string>& v);
	~Autocomplete();
	void delete_node(TrieNode* node);

};	

#endif