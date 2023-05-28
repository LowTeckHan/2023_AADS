#ifndef Patron_H
#define Patron_H

#include <vector>

class Patron
{
private:
	std::vector<int> Patron_ID;
public:
	void set_Patron_ID(int id);
	bool get_Patron_ID(int id);
};

#endif