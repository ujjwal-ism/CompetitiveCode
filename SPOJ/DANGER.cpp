#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int josepheus(int n){
	int p=1;
	while( p <= n)
		p *= 2;
	return (2*n) -p + 1;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	while(1){
		string s;cin>>s;
		if(s[0] == '0' && s[1] == '0') break;

		int n;
		n = 10*(s[0]-'0');
		n += (s[1]-'0');
		n = n*(pow(10,(s[3]-'0')));
		cout<<josepheus(n)<<endl;
	}

	return 0;
}