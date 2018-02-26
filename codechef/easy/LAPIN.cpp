#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
 	int t;cin>>t;
 	while(t--) {
 		string s;cin>>s;
 		int l = s.length();

 		int st = 0, mid;
 		mid = (l%2 == 0) ? l/2 : l/2 + 1;

 		map<char,int> m;
 		for(int i=0;i<l/2;i++){
 			m[s[i]]++;
 			m[s[mid+i]]--;
 		}

 		bool flag = true;
 		map<char,int>::iterator it = m.begin();
 		for(;it!=m.end();it++){
 			if(it->second != 0){
 				flag = false;
 				break;
 			}
 		}

 		if(flag) cout<<"YES\n";
 		else cout<<"NO\n";
 	}

	return 0;
}