#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long long n,m,t;
	while(1){
		cin>>n;
		if(n==-1)
			return 0;
		t = 1-n;
		m = (3+sqrt(9-12*t))/6;
		if(3*m*m-3*m+1 == n)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}