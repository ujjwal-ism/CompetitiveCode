#include <bits/stdc++.h>

using namespace std;

int bs(vector<int> &v,int n,int c){
	int lo = 0; int hi = v[n-1];
	int max = -1;
	while(hi>lo){
		int mid = lo + (hi-lo)/2;
		
		int t = 1,p = v[0];
		for(int i=1;i<n;i++){
			if(v[i]-p >= mid){
				t++; p = v[i];
				if(t == c)
					break;
			}
		}
		if(t == c){
			if(mid>max)
				max = mid;
			lo = mid+1;
		}
		else
			hi = mid;
	}
	return max;
}

int main(int argc, char const *argv[])
{
	int t,n,c;scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&c);
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];

		sort(v.begin(),v.end());

		printf("%d\n",bs(v,n,c));
	}
	return 0;
}