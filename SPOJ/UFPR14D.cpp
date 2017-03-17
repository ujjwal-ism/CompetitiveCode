#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;scanf("%d",&n);
	int a[n],s[n+1];
	s[0]=1;

	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		s[i+1]=a[i]+s[i];
	}

	int t,c,b;scanf("%d",&t);
	while(t--){
		scanf("%d%d",&c,&b);
		printf("%d\n",s[b]-s[c-1] );
	}
	return 0;
}