#include "Doc.h"
#include <string>
#include <vector>
#include <tuple> 
#include <algorithm>
#include <iostream>

using namespace std;

bool sortbyname(const tuple<string, int, int>& a, 
              const tuple<string, int, int>& b)
{
    return (get<0>(a) < get<0>(b));
}

bool sortbyid(const tuple<string, int, int>& a, 
              const tuple<string, int, int>& b)
{
    return (get<1>(a) < get<1>(b));
}




Doc::Doc()
{

}

void Doc::set_Doc(string name, int id, int limit)
{
	D.emplace_back(name,id,limit);
	sort(D.begin(),D.end(),sortbyid);
}

int Doc::get_Doc(string name)
{
	int doc_id=0;
	sort(D.begin(),D.end(),sortbyname);
	
	auto low=lower_bound(D.begin(),D.end(),make_tuple(name,0,0),sortbyname);

	if(low!=D.end() && get<0>(*low)==name)
	{
		doc_id=get<1>(*low);
	}

	return doc_id;
}

bool Doc::gib(int id)
{
	sort(D.begin(),D.end(),sortbyid);
	bool b=false;
	

	auto low=lower_bound(D.begin(),D.end(),make_tuple("",id,0),sortbyid);

	if(get<1>(*low)==id && get<2>(*low)!=0)
	{
		int index = distance(D.begin(),low);
		D[index] = make_tuple(get<0>(*low), get<1>(*low), get<2>(*low)-1);
		b=true;
	}

	return b;
}


void Doc::ret(int id)
{
	sort(D.begin(),D.end(),sortbyid);

	auto low=lower_bound(D.begin(),D.end(),make_tuple("",id,0),sortbyid);

	if(low!=D.end() && get<1>(*low)==id)
	{
		int index = distance(D.begin(),low);
		D[index] =make_tuple(get<0>(*low), get<1>(*low) , get<2>(*low)+1);
		
	}
	
}

//i used tuple because it allows me to store all 3 datas in 1 vector, and allows me to sort them easily by name or ID
//i used sort so the vector can be more neatly sorted, it doesn't really make sense for multiple book to share the same name and ID to use stable_sort

//unordered_map is better for larger data but it doesnt makes sense to sort it (from google/stack overflow)
//found someone online stating using lower_bound might be faster than map, even for larger number [https://stackoverflow.com/questions/454762/vector-or-map-which-one-to-use#:~:text=Map%20is%20useful%20when%20there%27s,beyond%20just%20a%20few%20elements.]	
//it would be easier and more readable than using map<string,tuple<int,int>> or map<string,pair<int,int>>
//some example I found just, when desire to not sort with ->first, just place them in a vector, sort(v.begin(),v.end(),sortby), and return 
//apparently both have time a complexity of O(n*log(n))