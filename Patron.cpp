#include "Patron.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void Patron::set_Patron_ID(int id)
{
	Patron_ID.push_back(id);
	sort(Patron_ID.begin(),Patron_ID.end());
}

bool Patron::get_Patron_ID(int id)
{
	bool b=false;
	for(auto p:Patron_ID)
	{
		if(p==id)
		{
			b=true;
		}
	}

	return b;
}

//i used sort so the vector can be more neatly sorted, it doesn't really make sense for multiple patrons to share the same ID, so i don't think it need to be stable
//