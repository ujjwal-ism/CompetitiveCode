#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;cin>>n;
	int arr[n];
	bool set[n];

	for(int i=0;i<n;i++) {
		cin>>arr[i];
		set[i] = true;
	}

	int sol[31];

	for(int bit = 30;bit >= 0;bit--){
		int in_set = 0;
		for(int i=0;i<n;i++){
			if(set[i] && (arr[i]&(1<<bit)))
				in_set++;
		}

		if(in_set > 1){
			sol[bit] = 1;
			for(int i=0;i<n;i++){
				if(!(arr[i]&(1<<bit)))
					set[i] = false;
			}
		}

		else{
			sol[bit] = 0;
		}
	}

	ll ans = 0;
	for(int i=0;i<31;i++){
		ans += (ll)sol[i]*(1<<i);
	}

	cout<<ans<<endl;

	return 0;
}