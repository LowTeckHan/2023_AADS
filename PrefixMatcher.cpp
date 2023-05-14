#include "PrefixMatcher.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct PrefixMatcher::TrieNode
{
	bool is_end_of_word=false;
	vector<TrieNode*>  children;
	string s;
	int route_number=-1;
};

PrefixMatcher::PrefixMatcher()
{
	root = new TrieNode();
}

PrefixMatcher::~PrefixMatcher()
{
	delete_node(root);
}

void PrefixMatcher::delete_node(TrieNode* node)
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

void PrefixMatcher::insert(string address, int routerNumber)
{
    TrieNode* node = root;
    for(char c : address)
    {
        bool exist = false;
        for(TrieNode* child : node->children)
        {
            if(child->s == string(1, c))
            {
                exist = true;
                node = child;
                break;
            }
        }

        if(!exist)
        {
            TrieNode* node1 = new TrieNode();
            node1->s = string(1, c);
            node->children.push_back(node1);
            node = node1;
        }

    }

        node->route_number = routerNumber;
        node->is_end_of_word = true;

}

int PrefixMatcher::selectRouter(std::string networkAddress)
{
    int route_number = -1;
    TrieNode* node = root;
    TrieNode* last = nullptr;
    for(char c : networkAddress)
    {
        bool exist = false;
        for(TrieNode* child : node->children)
        {
            if(child->s == string(1, c))
            {
                exist = true;
                node = child;
                if(node->is_end_of_word)
                {
                    last = child;
                }
                break;
            }
        }

        if(!exist)
        {
            break;
        }
    }
    

    TrieNode* match = last;
    int a=0;
    if(match!=nullptr)
    {
    	a=match->s.length();
    }
    for(int i = a; i < networkAddress.length(); i++)
    {
        bool exist = false;
        for(TrieNode* child : node->children)
        {
            if(child->s == string(1, networkAddress[i]))
            {
                exist = true;
                node = child;
                if(node->is_end_of_word)
                {
                    match = node;
                }
                break;
            }
        }

        if(!exist)
        {
            break;
        }
    }
    
    if(match != nullptr)
    {
        route_number = match->route_number;
    }
    else if(last != nullptr)
    {
        route_number = last->route_number;
    }
    else if(node->is_end_of_word)
    {
        route_number = node->route_number;
    }

    return route_number;
}











