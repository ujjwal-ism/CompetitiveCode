#include <bits/stdc++.h>

using namespace std;
char result[1000001];
int k,l;

void build(){
	result[1]='A';
	int t = min(k,l);
	for(int i=2;i<t;i++)
		result[i] = (i%2==0)?'B':'A';
	result[t] = 'A';
	
	int j = max(k,l);
	char a,b,c;

	for(int i=t+1;i<j;i++){
		a = result[i-1]; b  = result[i-t];
		if(a == 'A' && b == 'A')
			result[i] = 'B';
		else if(a == 'B' && b == 'B')
			result[i] = 'A';
		else
			result[i] = 'A';
	}
	result[j] = 'A';

	for(int i=j+1;i<=1000000;i++){
		a = result[i-1]; b  = result[i-t]; c = result[i-j];
		if(a == 'A' && b == 'A' && c == 'A')
			result[i] = 'B';
		else if(a == 'B' && b == 'B' && c == 'B')
			result[i] = 'A';
		else
			result[i] = 'A';
	}
}

int main(int argc, char const *argv[])
{
	cin>>k>>l;
	build();
	
	int m,t;cin>>m;
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		printf("%c",result[t]);
	}

	return 0;
}