#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"


using namespace std;

int main()
{
	Reverser r;
	string name="Panjoey";

	cout<<r.reverseDigit(12345)<<endl;

	cout<<r.reverseString(name)<<endl;


	Truckloads t;
	int num, load;

	//cout<<"num\n";
	//cin>>num;
	//cout<<"load\n";
	//cin>>load;

	cout<<t.truckloads(10240000,1)<<endl;
	//cout<<t.truckload(15,1)<<endl;
	//cout<<t.truckload(14,3)<<endl;

	return 0;
}