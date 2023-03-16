#include "Truckloads.h"
using namespace std;

int Truckloads::numTrucks(int num, int load)
{


	if(num<load || num==load)
	{

		return 1;
	}	
		return Truckloads::numTrucks(num/2+num%2,load) + Truckloads::numTrucks(num/2,load) ;

};



