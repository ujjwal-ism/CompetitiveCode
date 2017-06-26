#include <bits/stdc++.h>
#define MAX 1000005
using namespace std;

int arr[MAX] = {0};

void build(){
	for(int i=2;i<=100;i++){
		if(arr[i] == 0){
			int t = i*i*i;
			for(int j = t;j<MAX;j += t)
				arr[j] = -1;
		}
	}
	int idx = 1;
	for(int i=1;i<MAX;i++){
		if(arr[i]==0)
			arr[i] = idx++;
	}
}

int main()
{
	build();
	int t,n;scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		if(arr[n] == -1)
			printf("Case %d: Not Cube Free\n",i );
		else
			printf("Case %d: %d\n",i,arr[n]);
	}
	return 0;
}