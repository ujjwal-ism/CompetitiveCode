#include <bits/stdc++.h>
#define endl '\n'
#define MAX 1000002
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

ll f[2*MAX],G[MAX],F[MAX];

void fill_f(){
	int limit = 2*MAX;
	for(int i=2;i<limit;i++){
		ll a[2] = {0,0};
		int n = i;
		while(n){
			a[n%2] += n%10;
			n /= 10;
		}
		f[i] = abs(a[0] - a[1]);
	}
}

void fill_G() {
	G[1] = 2;
	for(int i=2;i<MAX;i++){
		G[i] = G[i-1] + 2*(f[2*i-1] + f[2*i] - f[i]) + f[2*i-2] - f[2*i];
	}
}

void fill_F() {
	F[1] = 2;
	for(int i=2;i<MAX;i++){
		F[i] = F[i-1] + G[i];
	}
}


int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   	fill_f();
   	fill_G();
   	fill_F();

   	int t;cin>>t;
   	while(t--){
   		int n;cin>>n;
   		cout<<F[n]<<endl;
   	}

	return 0;
}