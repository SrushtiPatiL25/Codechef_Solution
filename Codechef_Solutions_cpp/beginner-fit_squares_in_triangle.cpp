#include <iostream>
using namespace std;

int main() {
    int t,B;
    cin>>t;
    while(t--)
    {
        cin>>B;
        B-=2;
       
        B/=2;
        
        B=B*(B+1)/2;
        cout<<B<<endl;
    }
    
	return 0;
}
