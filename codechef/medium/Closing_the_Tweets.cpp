#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;


int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,k;cin>>n>>k;

	bool tweet[n+1] = {false};
	string s;
	int open = 0,t;

	for(int i=0;i<k;i++){
		cin>>s;
		if(s == "CLICK"){
			cin>>t;
			if(tweet[t]) open--;
			else open++;
			tweet[t] = !tweet[t];
		}
		else{
			memset(tweet,false,sizeof(tweet));
			open = 0;
		}
		cout<<open<<endl;
	}

	return 0;
}