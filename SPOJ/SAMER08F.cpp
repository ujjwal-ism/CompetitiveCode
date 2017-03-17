#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(1){
		cin>>n;
		if(n==0)
			return 0;
		int sum = 0;
		for(int i=n;i>0;i--)
			sum+=i*i;
		cout<<sum<<endl;
	}
	return 0;
}