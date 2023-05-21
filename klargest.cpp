#include <vector>
#include <queue>  

using namespace std;

class klargest
{
public:
	klargest();
	int kth_largest(std::vector<int> values, int k);

};

klargest::klargest()
{

}

int klargest::kth_largest(std::vector<int> values, int k)
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

