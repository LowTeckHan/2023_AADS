#include "EfficientTruckloads.h"
#include<iostream>
#include <map>
using namespace std;

int EfficientTruckloads::numTrucks(int num, int load)
{

	static map<int,int> TL_v;
	map<int,int>::iterator it;


	it=TL_v.find(num);
	if(it !=TL_v.end())
	{
		return it->second;
	}

	//cout<<num<<" "<<accu<<endl;



	if(load>=num)
	{
		TL_v.insert(pair<int,int>(num,1));
		return 1;
	}	



		int result= EfficientTruckloads::numTrucks(num/2+num%2,load) + EfficientTruckloads::numTrucks(num/2,load);
	TL_v.insert(pair<int,int>(num,result));


	return EfficientTruckloads::numTrucks(num/2+num%2,load) + EfficientTruckloads::numTrucks(num/2,load);


	


};



