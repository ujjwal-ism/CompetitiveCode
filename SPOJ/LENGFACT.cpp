#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll; 
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	ll n;
	while(t--){
		cin>>n;
		if(n==0 || n==1 || n==2)
			n = 1;
		else
			n = floor((log(2*acos(-1)*n)/2 + n*(log(n)-1))/log(10))+1;
		cout<<n<<endl;
	}

	return 0;
}