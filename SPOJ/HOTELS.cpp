#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);

	deque<int> dq;
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",arr+i);

	long max = 0;
	long sum = arr[0];
	dq.push_back(arr[0]);
	int i = 0;
	while(i<n){
		if(sum > m){
			sum -= dq.front();
			if(sum <= m && sum > max)
				max = sum;

			dq.pop_front();
			if(sum < m){
				i++;
				dq.push_back(arr[i]);
				sum += arr[i];
				if(sum <= m && sum > max)
					max = sum;
			}
		}
		else{
			if(sum <= m && sum > max)
				max = sum;
			i++;
			dq.push_back(arr[i]);
			sum += arr[i];	
			if(sum <= m && sum > max)
				max = sum;
		}

	}
	while(!dq.empty()){
		if(sum <= max)
			break;
		if(sum <=m && sum > max)
			max = sum;
		sum -= dq.front();
		dq.pop_front();
	}
	cout<<max;

	return 0;
}