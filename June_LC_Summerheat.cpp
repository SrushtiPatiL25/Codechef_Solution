#include <iostream>
using namespace std;

int main() {
    
    int t,x,y,X,Y,ans;
    cin>>t;
    
    while(t--)
    {
      cin>>x>>y>>X>>Y;
      
        ans=(X/x)+(Y/y);
        cout<<ans<<endl;
    }
	return 0;
}
