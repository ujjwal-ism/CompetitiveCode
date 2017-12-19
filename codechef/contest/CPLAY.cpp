#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	string s;
	while(cin>>s){
		int teamA = 0 , teamB = 0;

		for(int i=0;i<6;i++){
			if(i%2 == 0 && s[i] == '1') teamA++;
			else if(i%2 == 1 && s[i] == '1') teamB++;
		}

		if(teamA == 3 && teamB == 0){
			cout<<"TEAM-A "<<6<<endl;
			continue;
		}
		if(teamB == 3 && teamA == 0){
			cout<<"TEAM-B "<<6<<endl;
			continue;
		}
		
		if(s[6] == '1') teamA++;		
		if(teamA - teamB >= 3){
			cout<<"TEAM-A "<<7<<endl;
			continue;
		}
		if(teamB - teamA >= 2){
			cout<<"TEAM-B "<<7<<endl;
			continue;
		}

		if(s[7] == '1') teamB++;
		if(teamA - teamB >=2){
			cout<<"TEAM-A "<<8<<endl;
			continue;
		}
		if(teamB - teamA >=2){
			cout<<"TEAM-B "<<8<<endl;
			continue;
		}

		if(s[8] == '1') teamA++;
		if(teamA - teamB >=2){
			cout<<"TEAM-A "<<9<<endl;
			continue;
		}
		if(teamB - teamA >= 1){
			cout<<"TEAM-B "<<9<<endl;
			continue;
		}

		if(s[9] == '1') teamB++;
		if(teamA > teamB){
			cout<<"TEAM-A "<<10<<endl;
			continue;
		}
		if(teamB > teamA){
			cout<<"TEAM-B "<<10<<endl;
			continue;
		}

		else{
			int i;
			for(i=10;i<20;i+=2){
				if(s[i] == '1') teamA++;
				if(s[i+1] == '1') teamB++;

				if(teamA > teamB){
					cout<<"TEAM-A ";break;
				}
				if(teamB > teamA){
					cout<<"TEAM-B ";break;
				}
			}
			if(i == 20)
				cout<<"TIE\n";
			else
				cout<<i+2<<endl;
		}
	}	

	return 0;
}