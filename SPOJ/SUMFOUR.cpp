#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;scanf("%d",&n);
	int a[n],b[n],c[n],d[n];
	vector<int> lhs(n*n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",a+i,b+i,c+i,d+i);
	}
	
	int idx = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			lhs[idx++] = a[i] + b[j];
	}
	sort(lhs.begin(),lhs.end());
  	std::pair<std::vector<int>::iterator,std::vector<int>::iterator> bounds;

	int rhs;
	long long ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			rhs = -1*(c[i] + d[j]);
			bounds = equal_range(lhs.begin(),lhs.end(),rhs);
			ans += bounds.second - bounds.first;
		}
	}

	printf("%lld",ans );
	
	return 0;
}