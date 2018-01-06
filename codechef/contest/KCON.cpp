#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

inline ll maxSubArraySum(ll a[], int size)
{
    ll max_so_far = -9999999999, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   	int t;cin>>t;
   	while(t--){
   		int n,k;cin>>n>>k;
   		
   		ll arr[n];
   		vector<ll> left_sum(n) , right_sum(n);
   		ll total_sum = 0;

   		for(int i=0;i<n;i++){
   			cin>>arr[i];
   			total_sum += arr[i];
   		}

   		ll max_subarray_sum = maxSubArraySum(arr,n);
   		if(k == 1)
   			cout<<max_subarray_sum<<endl;
   		else{
   			left_sum[0] = arr[0];
   			right_sum[n-1] = arr[n-1];

   			for(int i=1;i<n;i++){
   				left_sum[i] = left_sum[i-1] + arr[i];
   				right_sum[n-1-i] = right_sum[n-i] + arr[n-1-i];
   			}

   			ll left_sum_max = *max_element( left_sum.begin(), left_sum.end());
   			ll right_sum_max = *max_element( right_sum.begin(), right_sum.end());

   			if(total_sum <= 0){
   				cout<<max(max_subarray_sum, left_sum_max + right_sum_max)<<endl;
   			}
   			else{
   				cout<<max(max_subarray_sum, max(right_sum_max + (ll)(k-1)*total_sum, right_sum_max + (ll)(k-2)*total_sum + left_sum_max))<<endl;
   			}
   		}

   	}		
   	
	return 0;
}