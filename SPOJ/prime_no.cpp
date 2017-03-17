#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	v.push_back(2);
	for (int i = 3; i < 32000; ++i)
	{
		for (int j= 2; j <= i; ++j)
		{
			if(j==i){
				v.push_back(j);
				break;
			}
			if(i%j==0)
				break;
			
		}
	}
	int t;
	long first,last;
	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		cin>>first>>last;
		if(last==1)
			continue;
		if(first==1)
			first=2;
		if(first==2){
			cout<<first<<endl;
			if(last !=2)
				cout<<first+1<<endl;
			first=5;
		}
		if(first==3){
			cout<<first<<endl;
			first=5;
		}

		
		for (long j = first; j <= last; ++j)
		{
			for (int k = 0; v[k] <= sqrt(j); ++k)
			{
				if(j%v[k]==0)
					break;
				if(v[k+1] > sqrt(j))
					cout<<j<<endl;
			}
		
		}
	}

	return 0;
}