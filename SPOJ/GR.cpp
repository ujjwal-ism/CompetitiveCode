#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;long t;
	cin>>n>>t;
	int arr[n+1][n+1];
	int temp;
	if(t%4 == 1){
		cout<<"Sameh\n";
		temp = n*n;
		for(int j=1;j<=n;j++){
			for(int i=n;i>0;i--)
				arr[i][j] = temp--;
		}
	}	
	else if(t%4==2){
		cout<<"Ameen\n";
		temp = n*n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++)
				arr[i][j] = temp--;
		}
	}
	else if(t%4==3){
		cout<<"Shafeek\n";
		temp = 1;
		for(int j=1;j<=n;j++){
			for(int i=n;i>0;i--)
				arr[i][j] = temp++;
		}
	}
	else{
		cout<<"Atef\n";
		temp = 1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++)
				arr[i][j] = temp++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}