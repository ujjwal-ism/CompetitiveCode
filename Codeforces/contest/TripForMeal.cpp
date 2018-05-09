#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
   	//freopen("large.in","r",stdin);
	//freopen("large.out","w",stdout);

	int n,a,b,c;cin>>n>>a>>b>>c;
	char curr = 'r';
	int visit = 1;
	int dist = 0;

	while(visit < n) {
		if(curr == 'r') {
			if(a < b) {
				dist += a;
				curr = 'o';
			}
			else{
				dist += b;
				curr = 'e';
			}
		}
		else if(curr == 'o') {
			if(a < c) {
				dist += a;
				curr = 'r';
			}
			else{
				dist += c;
				curr = 'e';
			}
		}
		else {
			if(b < c) {
				dist += b;
				curr = 'r';
			}
			else{
				dist += c;
				curr = 'o';
			}
		}
		visit++;
	}

	cout<<dist;
	return 0;
}