#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef unsigned long long ll;

void ans(ll n){
	map<ll,int> m;
    ll temp=n;
        while(n%2==0){
            m[2]+=1;
            n=n/2;
        }
        for(ll i=3;i<=(ll)sqrt(temp);i=i+2){
            while(n%i==0){
                m[i]+=1;
                n=n/i;
            }
        }
        if(n!=1)
            m[n]=1;
        
        int flag = 1;
        map<ll,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
        	if(it->first % 4 == 3 && it->second % 2 != 0){
        		flag = 0;break;
        	}
        }
        if(flag == 1)
        	cout<<"Yes"<<endl;
        else
        	cout<<"No"<<endl;
    return;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	ll n;
	while(t--){
		cin>>n;ans(n);
	}

	return 0;
}