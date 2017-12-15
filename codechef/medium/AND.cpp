#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;cin>>n;
	ll arr[32];
	int input[n];

	for(int i=0;i<n;i++) cin>>input[i];

	for(int i=0;i<32;i++){
		int count = 0;
		for(int j=0;j<n;j++){
			if(input[j]&1)
				count++;
			input[j] >>= 1;
		}
		arr[i] = count;
	}

	ll ans = (arr[0]*(arr[0]-1))/2;

	for(int i=1;i<32;i++){
		ans += (((arr[i]*(arr[i]-1))/2)*(2<<(i-1)));
	}

	cout<<ans;
		
	return 0;
}