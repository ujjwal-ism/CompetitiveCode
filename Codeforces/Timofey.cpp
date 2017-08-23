#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//int ans[n];
	for(int i=0;i<n/2;i++){
		if(i%2==0){
			int temp = arr[i];
			arr[i] = arr[n-1-i];
			arr[n-1-i]= temp;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}