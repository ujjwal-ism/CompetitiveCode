#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;scanf("%d",&n);
	int arr[20001];
	memset(arr,0,sizeof(arr));
	int grp = 0;
	int pos;
	for(int i=0;i<n;i++){
		scanf("%d",&pos);
		arr[pos] = 1;
		if(pos == 1){
			if(arr[2] == 0)
				grp++;
		}
		else if(pos == 20000){
			if(arr[pos-1] == 0)
				grp++;
		}
		else{
			if(arr[pos-1] == 1 && arr[pos+1] == 1)
				grp--;
			else if(arr[pos-1] == 0 && arr[pos+1] == 0)
				grp++;
		}
		printf("%d\n",grp);
	}
	printf("Justice\n");	
	return 0;
}