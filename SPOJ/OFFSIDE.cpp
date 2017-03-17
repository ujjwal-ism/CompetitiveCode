#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a,d;
	while(1){
		cin>>a>>d;
		if(a==0 && d==0)
			return 0;
		std::vector<int> A(a);
		std::vector<int> D(d);
		for(int i=0;i<a;i++)
			cin>>A[i];
		
		for(int i=0;i<d;i++)
			cin>>D[i];

		sort(A.begin(),A.end());
		sort(D.begin(),D.end());

		if(A[0]<D[1]){
			cout<<"Y"<<endl;
		}
		else{
			cout<<"N"<<endl;
		}

	}
	return 0;
}