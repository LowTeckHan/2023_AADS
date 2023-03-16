#include "Truckloads.h"
#include<iostream>
#include <map>
using namespace std;

int Truckloads::truckloads(int num, int load)
{


	if(num<load || num==load)
	{

		return 1;
	}	
		return Truckload::truckload(num/2+num%2,load) + Truckload::truckload(num/2,load) ;

};



