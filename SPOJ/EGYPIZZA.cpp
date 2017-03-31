#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,c1=0,c2=0,c3=0;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s == "3/4")
			c1++;
		else if(s == "1/2")
			c2++;
		else
			c3++;
	}
	if(c1>=c3)
		cout<<c1+(int)ceil((float)c2/2)+1<<endl;
	else{
		c3 = c3-c1;
		cout<<c1+(int)ceil((float)c2*0.5+(float)c3*0.25)+1<<endl;
	}

	return 0;
}