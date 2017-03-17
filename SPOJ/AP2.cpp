#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	unsigned long long t3,t3l,to,n,d,a,s;
	while(t--){
		cin>>t3>>t3l>>s;
		to = t3l - t3;
		n = 2*s/(2*t3+to);
		d = to/(n-5);
		a = t3-2*d;
		cout<<n<<endl;
		for(int i=0;i<n;i++)
			cout<<a+i*d<<" ";
		cout<<endl;
	}
	return 0;
}