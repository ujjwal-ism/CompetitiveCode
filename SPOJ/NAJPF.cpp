#include <bits/stdc++.h>

using namespace std;

void computeLPS(string pat,int m,int *lps){
	int len = 0;

	lps[0] = 0;

	int i = 1;
	while(i < m){
			if(pat[i] == pat[len]){
			len++;
			lps[i] = len;
			i++;
		}
		else{
			if(len != 0)
				len = lps[len-1];
			else{
				lps[i] = 0;
				i++;
			}
		}
	}
}

void KMPSearch(string pat,string txt,vector<int> &sol){
	int n = txt.length();
	int m = pat.length();

	int lps[m];

	computeLPS(pat,m,lps);

	int i = 0; // index for txt
	int j = 0; // index for pat

	while(i < n){
		if(pat[j] == txt[i]){
			i++;
			j++;
		}

		if(j == m){
			sol.push_back(i-j);
		}

		if(i < n && pat[j] != txt[i]){
			if(j != 0)
				j = lps[j-1];
			else
				i += 1;
		}
	}
}
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	string txt,pat;
	while(t--){
		cin>>txt>>pat;
		vector<int> sol;
		KMPSearch(pat,txt,sol);
		if(sol.empty())
			cout<<"Not Found\n";
		else{
			int l = sol.size();
			cout<<l<<"\n";
			for(int i=0;i<l;i++)
				cout<<sol[i]+1<<" ";
		}
		cout<<"\n";
	}	
	return 0;
}