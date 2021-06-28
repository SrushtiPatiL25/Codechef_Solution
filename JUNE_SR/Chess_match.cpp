#include <iostream>
using namespace std;

int main() {
    int t;
    long long int N,A,B,ans;
    cin>>t;
    while(t--)
    {
        cin>>N>>A>>B;
        ans=(2*(180+N))-(A+B);
        cout<<ans<<endl;
        
    }
	return 0;
}
