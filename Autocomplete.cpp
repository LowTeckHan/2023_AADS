#include "Autocomplete.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Autocomplete::TrieNode
{
	bool is_end_of_word=false;
	vector<TrieNode*>  children;
	char c;
};

Autocomplete::Autocomplete()
{
	root = new TrieNode();
}

Autocomplete::~Autocomplete()
{
	delete_node(root);
}

void Autocomplete::delete_node(TrieNode* node)
{
	if(node==nullptr)
	{
		return;
	}

	for(TrieNode* child : node->children)
	{
		delete_node(child);
	}

	delete node;
}

void Autocomplete::insert(std::string word)
{
	TrieNode* node = root;

	for (char c : word) 
	{
		bool exist = false;
		for(TrieNode* child : node->children)
		{
			if(child->c==c)
			{
				exist = true;
				node=child;
				break;
			}
		}

		if(!exist)
		{
			TrieNode * node1= new TrieNode;
			node1->c = c;
			node->children.push_back(node1);
			node=node1; 
		}


	}

        node->is_end_of_word = true;
}



vector<string> Autocomplete::getSuggestions(string partialWord)
{
	vector<string> v;
	TrieNode* node = root;
	for(char c: partialWord)
	{
		bool exist = false;
		for(TrieNode* child : node->children)
		{
			if(child->c==c)
			{
				exist=true;
				node=child;
				break;
			}
		}

		if(!exist)
		{
			return v;
		}

	}

	traverse(node,partialWord,v);
	return v;
}


void Autocomplete::traverse(TrieNode * node, std::string& partialWord, std::vector<std::string>& v)
{
	if(node->is_end_of_word)
	{
		v.push_back(partialWord);
	}

	for(TrieNode* child : node->children)
	{
		partialWord.push_back(child->c);
		traverse(child,partialWord,v);
		partialWord.pop_back();
	}
}