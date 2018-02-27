#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
   	int a,n,k;cin>>a>>n>>k;

   	for(int i=0;i<k;i++) {
   		cout<<a%(n+1)<<" ";
   		a /= (n+1);
   	}

	return 0;
}