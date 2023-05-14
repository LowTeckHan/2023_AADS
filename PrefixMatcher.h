#ifndef PrefixMatcher_H
#define PrefixMatcher_H

#include <string>

class PrefixMatcher
{
	public:
	struct TrieNode;
	TrieNode * root;
	int selectRouter(std::string networkAddress);  // return the router with the longest matching prefix
	void insert(std::string address, int routerNumber);
	PrefixMatcher();
	~PrefixMatcher();
	void delete_node(TrieNode* node);
	void traverse(TrieNode * node, std::string& networkAddress, int& route_number);
	
};



#endif