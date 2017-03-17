#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int x,y;
	while(n--){
		cin>>x>>y;
		if(x%2==0){
			if(y==x)
				cout<<2*x<<endl;
			else if(y==x-2)
				cout<<2*x-2<<endl;
			else
				cout<<"No Number"<<endl;
		}
		else{
			if(y==x)
				cout<<2*x-1<<endl;
			else if(y==x-2)
				cout<<2*x-3<<endl;
			else
				cout<<"No Number"<<endl;
		}
	}
	return 0;
}