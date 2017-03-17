#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,m;scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		if(n%2==1 && m>=n)
			printf("R\n");
		else if(n%2==0 && m>=n)
			printf("L\n");
		else if(m%2==1)
			printf("D\n");
		else
			printf("U\n");
	}
	return 0;
}