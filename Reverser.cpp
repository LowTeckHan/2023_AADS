#include "Reverser.h"
#include<iostream>

using namespace std;
reverser::reverseDigit(int value,int rev)
{	
	if (value ==0)	
	{
		return rev;
	}

	return reverseDigit(value/10 , rev*10 +(value%10)) ;


}

string reverser::reverseString(string charaters, int i)
{
	string rev;

	if(i>(charaters.length()-1-i))
	{
		return charaters;
	}

	swap(charaters[i],charaters[charaters.length()-1-i]);

	return reverseString(charaters, i+1);
}




int main()
{
	reverser r;
	string name="Panjoey";

	cout<<r.reverseDigit(12345)<<endl;

	cout<<r.reverseString(name)<<endl;

	return 0;
}