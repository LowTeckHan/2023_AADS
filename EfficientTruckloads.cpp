#include "EfficientTruckloads.h"
#include<iostream>
#include <map>
using namespace std;

int E_Truckload::truckload(int num, int load)
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



		int result= E_Truckload::truckload(num/2+num%2,load) + E_Truckload::truckload(num/2,load);
	TL_v.insert(pair<int,int>(num,result));


	return E_Truckload::truckload(num/2+num%2,load) + E_Truckload::truckload(num/2,load);


	


};



int main()
{
	E_Truckload t;
	int num, load;

	//cout<<"num\n";
	//cin>>num;
	//cout<<"load\n";
	//cin>>load;

	cout<<t.truckload(1024,5)<<endl;
	cout<<t.truckload(1024,5)<<endl;
	cout<<t.truckload(15,1)<<endl;
}