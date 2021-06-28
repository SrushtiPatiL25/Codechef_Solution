#include <iostream>
using namespace std;

int main() {
    int t,A,B,C,D;
    
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C>>D;
        if(A+C==180 || B+D==180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
