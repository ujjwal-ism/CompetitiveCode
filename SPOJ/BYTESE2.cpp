#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

#define gc getchar_unlocked

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

inline void si(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

struct entry{
	int time;
	char status;
};

bool cmp(entry a,entry b){
	return a.time < b.time;
}

int main(int argc, char const *argv[])
{
	int t;si(t);
	while(t--){
		int n;si(n);
		entry arr[2*n+1];

		for(int i=1;i<=n;i++){
			si(arr[2*i-1].time);
			arr[2*i-1].status = 'l';
			si(arr[2*i].time);
			arr[2*i].status = 'r';
		}

		sort(arr+1,arr+2*n+1,cmp);
		int temp = 0;
		int ans = 0;
		for(int i=1;i<=2*n;i++){
			if(arr[i].status == 'l') temp++;
			else temp--;

			ans = max(ans,temp);
		}

		printf("%d\n",ans);

	}

	return 0;
}