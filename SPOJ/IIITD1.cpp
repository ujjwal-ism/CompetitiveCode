#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	ll n,a,b;
	while(t--){
		cin>>n;
		a = n;
		if(n==0){
			cout<<"1\n";
		}

		else if(n>0){
			
			int l = 0;
			while(a){
				a /= 10;
				l++;
			}

			if(l==1)
				cout<<"1\n";
			else{
				b = 1;
				while(l>1){
					b *= 10;
					l--;
				}
				cout<<b<<"\n";
			}
		}

		else{
			a *= -1;
			b = a;
			int l = 0;
			while(a){
				a /= 10;
				l++;
			}
			if(l==1){
				cout<<(b+1) - n<<"\n";
			}
			else{
				ll c = 1;
				while(l>1){
					c *= 10;
					l--;
				}
				cout<<(c+b)-n<<"\n";
			}
		}
	}	

	return 0;
}