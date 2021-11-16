#include <iostream>
using namespace std;
 
int main() {
     
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        int ans = x + y*2;
        if(x==0 && y%2 != 0){
            cout<<"NO"<<endl;
        }
        else if(ans%2 == 0){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}