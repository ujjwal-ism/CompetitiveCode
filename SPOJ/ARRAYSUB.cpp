#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);

	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",a+i);

	int k;scanf("%d",&k);
	deque<int> dq(k);

	for(int i=0;i<k;i++){
		while(!dq.empty() && a[i] >= a[dq.back()])
			dq.pop_back();

		dq.push_back(i);
	}
	for(int i=k;i<n;i++){
		cout<<a[dq.front()]<<" ";

		while(!dq.empty() && dq.front() <= i-k)
			dq.pop_front();

		while(!dq.empty() && a[i] >= a[dq.back()])
			dq.pop_back();

		dq.push_back(i);
	}
	cout<<a[dq.front()];

	return 0;
}