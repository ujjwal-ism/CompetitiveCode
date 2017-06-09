#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		int f = 1;
		while(1){
			n = n - 5;
			if(n < 3){
				printf("Case %d: -1\n",i );break;
			}
			if(n%3==0){
				printf("Case %d: %d\n",i,n);break;
			}
		}
	}	
	return 0;
}