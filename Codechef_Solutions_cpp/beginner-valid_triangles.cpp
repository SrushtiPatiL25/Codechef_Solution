#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a1,a2,a3;
    while(t--)
    {
        
        cin>>a1>>a2>>a3;
        int sum=a1+a2+a3;
        if(sum==180) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
