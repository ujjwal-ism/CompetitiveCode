#include <bits/stdc++.h>

using namespace std;
typedef long ll;

int main(int argc, char const *argv[])
{
	int n;scanf("%d",&n);
	vector<int> v(n);
	for(int i=0;i<n;i++)
		scanf("%d",&v[i]);

	vector<ll> rhs;
	ll lhs;
	for(int d=0;d<n;d++){
		if(v[d]){
			for(int e=0;e<n;e++){
				for(int f=0;f<n;f++)
					rhs.push_back(v[d]*(v[e]+v[f]));
			}
		}
	}
	sort(rhs.begin(),rhs.end());
	ll ans = 0;
	for(int a = 0;a<n;a++){
		for(int b = 0;b<n;b++){
			for(int c=0;c<n;c++){
				lhs = v[a]*v[b] + v[c];
				ans += upper_bound(rhs.begin(),rhs.end(),lhs) - lower_bound(rhs.begin(),rhs.end(),lhs);
			}
		}
	}

	printf("%ld",ans );

	return 0;
}