#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int p;cin>>p;
	double n,k,m;
	while(p--){
		cin>>n>>k>>m;
		if(n>=m)
			cout<<"0"<<endl;
		else{
		int t=0;
		double temp = n;
		while(1){
			if(temp>=m)
				break;
			temp*=k;
			t++;
		}		
		if(temp==m)
			cout<<t<<endl;
		else
			cout<<t-1<<endl;
		}
	}

	return 0;
}