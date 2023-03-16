#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"


using namespace std;

int main()
{
	reverser r;
	string name="Panjoey";

	cout<<r.reverseDigit(12345)<<endl;

	cout<<r.reverseString(name)<<endl;


	Truckload t;
	int num, load;

	//cout<<"num\n";
	//cin>>num;
	//cout<<"load\n";
	//cin>>load;

	cout<<t.truckload(10240000,1)<<endl;
	//cout<<t.truckload(15,1)<<endl;
	//cout<<t.truckload(14,3)<<endl;

	return 0;
}