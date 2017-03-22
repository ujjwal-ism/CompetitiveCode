#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[10],b[10];
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);

	b[0] = a[0];int flag = 0;
	if(b[0]>=100){
		printf("%d",b[0]);flag = 1;}
	else{
		for(int i=1;i<10;i++){
			b[i] = b[i-1]+a[i];
			if(b[i]>=100){
				if((b[i]-100)<=(100-b[i-1]))
					printf("%d",b[i]);
				else
					printf("%d",b[i-1]);
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0)
		printf("%d",b[9]);
	return 0;
}