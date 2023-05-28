#include "DocumentManager.h"
#include "Doc.h"
#include "Patron.h"
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

DocumentManager::DocumentManager()
{

}

void DocumentManager::addDocument(std::string name, int id, int license_limit)
{
	doc.set_Doc(name,id,license_limit);
}

void DocumentManager::addPatron(int patronID)
{
	p.set_Patron_ID(patronID);
}

int DocumentManager::search(string name)
{
	return doc.get_Doc(name);
}

bool DocumentManager::borrowDocument(int docid, int patronID)
{
	bool b=false;
	if(p.get_Patron_ID(patronID) && doc.gib(docid))
	{
		b=true;
	}
	return b;
}

void DocumentManager::returnDocument(int docid, int patronID)
{
	if(p.get_Patron_ID(patronID))
	{
		doc.ret(docid);
	}
}