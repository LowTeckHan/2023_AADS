#ifndef Doc_H
#define Doc_H
#include <string>
#include <tuple>
#include <vector>

class Doc
{
private:
	std::vector<std::tuple<std::string,int,int>> D;

public:
	Doc();
    void set_Doc(std::string name, int id, int limit);
    int get_Doc(std::string name);
    bool gib(int id);
    void ret(int id);
};

#endif