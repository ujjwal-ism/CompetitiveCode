#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,a[4],sum=0;
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	string s;
	cin>>s;
	int len = s.length();
	for(i=0;i<len;i++){
		if(s[i]-'0'==1)
			sum+=a[0];
		else if(s[i]-'0'==2)
			sum+=a[1];
		else if(s[i]-'0'==3)
			sum+=a[2];
		else
			sum+=a[3];
	}
	cout<<sum;
	return 0;
}