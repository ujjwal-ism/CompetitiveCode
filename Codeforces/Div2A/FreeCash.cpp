#include <bits/stdc++.h>

using namespace std;

int main(int argc,char const *argv[])
{
	int n;cin>>n;
	int h,m,temp,count=1;
	cin>>h>>m;
	temp=h*60+m;
	std::vector<int> v;
	for(int i=0;i<n-1;i++){
		cin>>h>>m;
		h=h*60+m;
		if(h==temp){
			count++;
			v.push_back(count);
		}
		else{
			temp = h;
			v.push_back(count);
			count=1;
		}
	}
	cout<<*max_element(v.begin(),v.end());
	return 0;
}