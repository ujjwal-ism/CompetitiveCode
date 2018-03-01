#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
 	int a,b,c;cin>>a>>b>>c;
 	int n = a+b+c;
 	map<int,int> m;

 	int count = 0;
 	for(int i=0;i<n;i++){
 		cin>>a;
 		m[a]++;
 		if(m[a]  == 2 ) count++;
 	}
 	cout<<count<<endl;

 	map<int,int>::iterator it;
 	for(it = m.begin(); it != m.end(); it++) {
 		if(it->second > 1)
 			cout<<it->first<<endl;
 	}

	return 0;
}