#include <bits/stdc++.h>

using namespace std;

bool p(int n){
		map<int,int> m;
        int temp=n;
        while(n%2==0){
             m[2]+=1;
             n=n/2;
        }
        for(int i=3;i<=sqrt(temp);i=i+2){
            while(n%i==0){
                 m[i]+=1;
                 n=n/i;
            }
        }
        if(n!=1){
             m[n]=1;
        }
        map<int,int>::iterator it;
        int count = 0;
        for(it=m.begin();it!=m.end();it++)
        	count++;

        if(count>2)
        	return true;
        return false;
}

int main(int argc, char const *argv[])
{
	vector<int> v;
	int i=30;
	while(1){
		if(v.size()==1000)
			break;
		if(p(i))
			v.push_back(i);
		i++;
	}
	int t,n;cin>>t;
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		printf("%d\n",v[n-1]);
	}

	return 0;
}