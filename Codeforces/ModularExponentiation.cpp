#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
   	int n,m;cin>>n>>m;

   	int x = log2(m);
   	if(n > x)
   		cout<<m<<endl;
   	else
   		cout<<m%(1<<n)<<endl;
   	
	return 0;
}