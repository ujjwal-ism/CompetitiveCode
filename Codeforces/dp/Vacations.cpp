#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int ans = 0;
int g = 0;
int c = 0;

void rest(){
	g = 0; c = 0;
	ans++;
	return;
}

void contest(){
	g = 0; c = 1;
	return;
}

void gym(){
	g = 1; c = 0;
	return;
}

void anyone(){
	g = 0;c = 0;
	return;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,t;cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t == 0){
			rest();
		}
		else if(t == 1){
			if(c == 0)
				contest();
			else
				rest();
		}
		else if(t == 2){
			if(g == 0)
				gym();
			else
				rest();
		}
		else{
			if(g == 1 && c == 0)
				contest();
			else if(g == 0 && c == 1)
				gym();
			else
				anyone();
		}
	}
	cout<<ans;

	return 0;
}