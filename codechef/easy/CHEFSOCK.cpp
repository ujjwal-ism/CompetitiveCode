#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
   	int j,s,m;cin>>j>>s>>m;
   	m -= j;
   	int sock = m/s;
   	if(sock != 0 && sock%2 == 0)
   		cout<<"Lucky Chef\n";
   	else
   		cout<<"Unlucky Chef\n";
   	
	return 0;
}