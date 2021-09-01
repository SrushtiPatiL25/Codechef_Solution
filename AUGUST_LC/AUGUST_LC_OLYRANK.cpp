/*In Olympics, the countries are ranked by the total number of medals won. 
You are given six integers G1, S1, B1, and G2, S2, B2, the number of gold, silver and bronze medals
won by two different counties respectively. Determine which country is ranked better on the leaderboard. 
It is guaranteed that there will not be a tie between the two countries.*/


#include <iostream>
using namespace std;

int main() {
    int t,G1,S1,B1,G2,S2,B2,max;
    long int team1_score,team2_score;
    cin>>t;
    while(t--)
    {
        cin>>G1>>S1>>B1>>G2>>S2>>B2;
        team1_score=G1+S1+B1;
        team2_score=G2+S2+B2;
        max=(team1_score>team2_score) ? 1 : 2;
        cout<<max<<endl;
    }
	return 0;
}
