#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

ll merge(int arr[],int lo,int mid,int hi){
	int i,j,k;
	int n1 = mid - lo + 1;
	int n2 = hi - mid;

	ll count = 0;
	int L[n1],R[n2];

	for(i = 0;i < n1; i++)
		L[i] = arr[lo + i];

	for(j = 0;j < n2; j++)
		R[j] = arr[mid + 1 + j];

	i = 0; j = 0; k = lo;

	while(i < n1 && j < n2){
		if(L[i] <= R[j])
			arr[k++] = L[i++];
		else{
			arr[k++] = R[j++];
			count += (mid -lo + 1 - i);
		}
	}

	while(i < n1)
		arr[k++] = L[i++];

	while(j < n2)
		arr[k++] = R[j++];

	return count;
}

ll mergesort(int arr[],int lo,int hi){
	ll count = 0;
	if(lo < hi){
		int mid = lo + (hi - lo)/2;

		count += mergesort(arr,lo,mid);
		count += mergesort(arr,mid+1,hi);
		count += merge(arr,lo,mid,hi);
	}
	return count;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];

		cout<<mergesort(arr,0,n-1)<<"\n";
	}

	return 0;
}