#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

struct point{
	int a,b;
};

bool cmp(point A,point B){
	return (A.b < B.b);
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		point p[n];
		for(int i=0;i<n;i++)
			cin>>p[i].a>>p[i].b;

		sort(p,p+n,cmp);

		int bombs = 1;
		int curr_bomb = p[0].b;

		for(int i = 1;i < n; i++){
			if(p[i].a > curr_bomb){
				bombs++;
				curr_bomb = p[i].b;
			}
		}

		cout<<bombs<<endl;
	}

	return 0;
}