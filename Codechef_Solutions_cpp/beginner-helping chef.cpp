#include <iostream>
using namespace std;

int main() {
    int t,num;
    cin>>t;
    while(t--)
    {
        cin>>num;
        if(num>=10)
        cout<<"-1"<<endl;
        else
        cout<<"Thanks for helping Chef!"<<endl;
    }
	return 0;
}
