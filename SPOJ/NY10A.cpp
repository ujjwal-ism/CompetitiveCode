#include <bits/stdc++.h>

using namespace std;

int Z(string s,int l){
	int n = s.length();
	int z[n];
	z[0]=0;
	
	int L = 0, R = 0;
	for (int i = 1; i < n; i++) {
  		if (i > R) {
    		L = R = i;
    		while (R < n && s[R-L] == s[R]) 
    			R++;
    			z[i] = R-L; R--;
  		} else {
    		int k = i-L;
    		if (z[k] < R-i+1) 
    			z[i] = z[k];
    		else {
      			L = i;
      			while (R < n && s[R-L] == s[R])
      			 	R++;
      				z[i] = R-L; R--;
   			 }
  		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(z[i]==l)
			count++;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int t,a,l=3;cin>>t;
	string s;
	for(int i=1;i<=t;i++){
		cin>>a;
		cin>>s;
		string temp;
		vector<int> v;

		temp = "TTT";
		temp.append("$");
		temp.append(s);
		v.push_back(Z(temp,l));

		temp = "TTH";
		temp.append("$");
		temp.append(s);
		v.push_back(Z(temp,l));

		temp = "THT";
		temp.append("$");
		temp.append(s);
		v.push_back(Z(temp,l));

		temp = "THH";
		temp.append("$");
		temp.append(s);
		v.push_back(Z(temp,l));

		temp = "HTT";
		temp.append("$");
		temp.append(s);
		v.push_back(Z(temp,l));


		temp = "HTH";
		temp.append("$");
		temp.append(s);
		v.push_back(Z(temp,l));

		temp = "HHT";
		temp.append("$");
		temp.append(s);
		v.push_back(Z(temp,l));

		temp = "HHH";
		temp.append("$");
		temp.append(s);
		v.push_back(Z(temp,l));

		cout<<a<<" ";
		for(int i=0;i<8;i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}