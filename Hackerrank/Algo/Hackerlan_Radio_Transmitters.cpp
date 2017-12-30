#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int arr[100005] , n, k;

int findNextTransmitterHouse(int currentHouse){
	int i = currentHouse + 1;
	//int ret = currentHouse;
	int prev = currentHouse;
	while(i < 100001){
		if(arr[i] && (i - currentHouse) <= k)
			prev = i;
		else if(arr[i] && (i - currentHouse) > k)
			return prev;
		i++;
	}
	return prev;
}

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   	memset(arr,0,sizeof(arr));
   	cin>>n>>k;

   	int temp;
   	int firstHouse = INT_MAX;
   	for(int i=0;i<n;i++){
   		cin>>temp;
   		arr[temp] = 1;
   		if(temp < firstHouse)
   			firstHouse = temp;
   	}

   	int currentTransmitter = findNextTransmitterHouse(firstHouse);
   	int count = 1;

   	int index = currentTransmitter + 1;
   	while(index < 100001) {
   	 	if(arr[index] && (index - currentTransmitter) > k){
   			currentTransmitter = findNextTransmitterHouse(index);
   			count++;
   			index = currentTransmitter + 1;
   		}
   		else
   			index++;;
   	}

   	cout<<count;
   	
	return 0;
}