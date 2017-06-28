#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;cin>>n;
	float credit[6],att,internal[3],points[6],final,atp,intscore,score,gpa;
	int fail;
	string s;
	while(n--){
		fail = 1;
		for(int i=0;i<6;i++) cin>>credit[i];

		for(int i=0;i<6;i++){
			for(int j=0;j<3;j++){
				cin>>s;
				if(s=="ab") internal[j] = 0;
				else internal[j] = stof(s);
			}
			cin>>final>>att;
			if(att < 51) atp = 5;
			else if(att < 61) atp = 4;
			else if(att < 71) atp = 3;
			else if(att < 81) atp = 2;
			else if(att < 91) atp = 1;
			else atp = 0;

			intscore = 1.125*((internal[0]+internal[1]+internal[2]) - min(internal[0],min(internal[1],internal[2])));
			score = intscore + atp + final/2.0;

			if(score >= 91) points[i] = 10;
			else if(score >= 81) points[i] = 9;
			else if(score >= 71) points[i] = 8;
			else if(score >= 61) points[i] = 7;
			else if(score >= 51) points[i] = 6;
			else if(score == 50) points[i] = 5;
			else{
				points[i] = 0;
				fail = 0;
			}
		}
		atp = 0;
		for(int i=0;i<6;i++) atp += credit[i];

		final = 0;
		for(int i=0;i<6;i++) final += credit[i]*points[i];

		gpa = final/atp;

		s = (fail)?"PASSED":"FAILED";
		cout<<s<<", ";
		printf("%.2f\n",gpa);

	}	
	return 0;
}