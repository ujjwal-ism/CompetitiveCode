#include <bits/stdc++.h>

using namespace std;

struct node{
	int start;
	int end;
};

bool cmp(node A,node B){
	return (A.end<B.end);
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		node a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].start>>a[i].end;
		}
		sort(a,a+n,cmp);
		int count = 1;
		int e = a[0].end;
		for(int i=1;i<n;i++){
			if(a[i].start>=e){
				count++;
				e = a[i].end;
			}
		}
		cout<<count<<"\n";
	}

	return 0;
}