#include "Truckloads.h"
using namespace std;

int Truckloads::truckloads(int num, int load)
{


	if(num<load || num==load)
	{

		return 1;
	}	
		return Truckloads::truckloads(num/2+num%2,load) + Truckloads::truckloads(num/2,load) ;

};



