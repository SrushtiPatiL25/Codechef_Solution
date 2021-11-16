#include <iostream>
using namespace std;

int main() {
    int t,x,y,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b>>k;
        a=a*k;
        b=b*k;
        x+=a;
        y+=b;
        if(x==y)
        {
            cout<<"SAME PRICE"<<endl;
        }
        else if(x>y){
            cout<<"DIESEL"<<endl;
            
        }
        else{
            cout<<"Petrol"<<endl;
        }
    }
	return 0;
}
