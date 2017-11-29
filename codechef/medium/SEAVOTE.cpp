#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int N = n;
		int temp , sum = 0;
		bool flag = false;
		while(n--){
			cin>>temp;
			if(temp > 100) flag = true;
			else if(temp == 0) N--;
			sum += temp;
		}

		if(flag || sum < 100 || sum > (99 + N))
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}

	return 0;
}