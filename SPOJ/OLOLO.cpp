#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,a=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		a = a^n; 
	}
	printf("%d",a );;
	return 0;
}