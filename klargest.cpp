#include <vector>
#include <queue> 
using namespace std;
 
int kth_largest(vector<int> values, int k)
{
	priority_queue<int> p;
	int kth=-1;

	for(int a:values)
	{
		p.push(a);
	}


		for(int i=0;i<k-1;i++)
		{
			p.pop();
		}

		kth=p.top();



	return kth;
}

