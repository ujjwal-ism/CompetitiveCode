#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,q;cin>>t;
	while(t--){
		scanf("%d",&n);
		map<int,int> m;
		for(int i=0;i<n;i++){
			scanf("%d",&q);
			m[q]++;
		}

		map<int,int>::iterator it;
		int flag = 0;int e = n/2;
		for(it = m.begin();it != m.end();it++){
			if(it->second > e){
				printf("YES %d\n",it->first);
				flag = 1;break;
			}
		}
		if(flag == 0)
			printf("NO\n");
	}
	return 0;
}