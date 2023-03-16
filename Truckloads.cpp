#include "Truckloads.h"
#include<iostream>
#include <map>
using namespace std;

int Truckload::truckload(int num, int load)
{
	//int accu=1;
	//static map<int,int> tl_v;
	//map<int,int>::iterator it;
	//int result;

	//it=tl_v.find(num);

	//if(it !=tl_v.end())
	//{
	//	return it->second;
	//}

	//cout<<num<<" "<<accu<<endl;



	if(num<load || num==load)
	{
	//	tl_v.insert(pair<int,int>(num,num));
		return 1;
	}	


	//if(num%2==0)
		//{
		//	result =Truckload::truckload(num/2,load,accu) + Truckload::truckload(num/2,load,accu+1);;
		//}
	//else if(num%2!=0)
	//{
	//	result =Truckload::truckload(num/2,load,accu+1);
	//}
	
	//tl_v.insert(pair<int,int>(num,result));


			return Truckload::truckload(num/2+num%2,load) + Truckload::truckload(num/2,load) ;


	


};



int main()
{
	Truckload t;
	int num, load;

	//cout<<"num\n";
	//cin>>num;
	//cout<<"load\n";
	//cin>>load;

	cout<<t.truckload(10240,1)<<endl;
	cout<<t.truckload(15,1)<<endl;
	cout<<t.truckload(14,3)<<endl;
}