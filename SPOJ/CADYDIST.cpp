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

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	while(1){
		int n;si(n);
		if(n == 0) break;

		int class_student[n];
		for(int i=0;i<n;i++) si(class_student[i]);

		int candy_cost[n];
		for(int i=0;i<n;i++) si(candy_cost[i]);

		sort(class_student,class_student+n,greater<int>());
		sort(candy_cost,candy_cost+n);

		ll sol = 0;
		for(int i=0;i<n;i++)
			sol += (ll)class_student[i]*(ll)candy_cost[i];

		printf("%lld\n",sol);
	}

	return 0;
}