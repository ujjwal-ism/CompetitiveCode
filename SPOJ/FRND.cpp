#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{	
	int n;scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);

	ll count, sum = 0;
	for(int i=0;i<32;i++){
		count = 0;
		for(int j=0;j<n;j++){
			if(arr[j]&(1<<i))
				count++;
		}
		sum += count*((ll)n - count)*(1<<(ll)i);
	}
	printf("%lld",sum);

	return 0;
}