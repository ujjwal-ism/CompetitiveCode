#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int g,b,n,m;
	while(1){
		cin>>g>>b;
		if( g == -1 && b == -1)
			return 0;
		if(g>=b){
			n=g;m=b;
		}
		else{
			n=b;m=g;
		}
		float q = (float)n/(float)(m+1);
		int t = ceil(q);
		cout<<t<<endl;
	}
	return 0;
}