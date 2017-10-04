#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,l;cin>>t;
	char a[10],b[10],c[10],plus[10],equal[10];
	while(t--){
		cin>>a>>plus>>b>>equal>>c;
		if(strstr(a,"machula")){
			int x = stoi(b);
			int z = stoi(c);
			l = z - x;
			cout<<l<<" + "<<x<<" = "<<z<<"\n";
		}
		else if(strstr(b,"machula")){
			int x = stoi(a);
			int z = stoi(c);
			l = z - x;
			cout<<x<<" + "<<l<<" = "<<z<<"\n";
		}
		else{
			int x = stoi(a);
			int z = stoi(b);
			l = z + x;
			cout<<x<<" + "<<z<<" = "<<l<<"\n";
		}
	}
	return 0;
}