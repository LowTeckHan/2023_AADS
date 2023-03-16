#include "Reverser.h"


using namespace std;
int Reverser::reverseDigit(int value,int rev)
{	
	if (value ==0)	
	{
		return rev;
	}

	return reverseDigit(value/10 , rev*10 +(value%10)) ;


}

string Reverser::reverseString(string charaters, int i)
{
	string rev;

	if(i>(charaters.length()-1-i))
	{
		return charaters;
	}

	swap(charaters[i],charaters[charaters.length()-1-i]);

	return reverseString(charaters, i+1);
}



