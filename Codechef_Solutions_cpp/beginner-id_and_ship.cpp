#include <iostream>
using namespace std;

int main() {
 
    int t;
    char s;
    cin>>t;
    while(t--)
    {
      cin>>s  ;
      if(s=='b' || s=='B') cout<<"BattleShip"<<endl;
      else if(s=='C' || s=='c') cout<<"Cruiser"<<endl;
      else if(s=='D' || s=='d') cout<<"Destroyer"<<endl;
      else if(s=='f' || s=='F') cout<<"Frigate"<<endl;
    }
	return 0;
}
