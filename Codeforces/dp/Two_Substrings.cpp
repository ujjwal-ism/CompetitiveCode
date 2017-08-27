#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	vector<pair<int,int> > ab,ba;
	string s;cin>>s;
	int l = s.length();

	for(int i=0;i<l-1;i++){
		if(s[i] == 'A' && s[i+1] == 'B')
			ab.push_back(make_pair(i,i+1));
		if(s[i] == 'B' && s[i+1] == 'A')
			ba.push_back(make_pair(i+1,i));
	}

	if(ab.empty() || ba.empty()){
		cout<<"NO";
	}
	else{
		int a = ab.size();
		int b = ba.size();
		int flag = 1;

		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(ab[i].first != ba[j].first && ab[i].second != ba[j].second){
					cout<<"YES";flag = 0;
					break;
				}
			}
			if(!flag) break;
		}

		if(flag)
			cout<<"NO";
	}

	return 0;
}