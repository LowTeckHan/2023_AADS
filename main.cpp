#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include "DocumentManager.h"

using namespace std;

int main()
{

	DocumentManager d;

	d.addDocument("name1",1234,3);
	d.addDocument("name2",2345,3);
	d.addDocument("name4",4325,2);

	d.addPatron(12345);
	d.addPatron(321);

	cout<<d.search("name2")<<endl;



	for(int i=0;i<5;i++)
	{
		cout<<d.borrowDocument(1234,12345)<<endl;
	}

	cout<<endl;
	d.returnDocument(1234,12345);

	cout<<d.borrowDocument(1234,321)<<endl;



	return 0;
}