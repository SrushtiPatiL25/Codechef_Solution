#include <iostream>
using namespace std;

int main() {
    int t;
    float hard,cc,strength;
    cin>>t;
    while(t--)
    {
        cin>>hard>>cc>>strength;
        if(hard>50 && cc<0.7 && strength>5600)
        cout<<10<<endl;
        else if(hard>50 && cc<0.7)
        cout<<9<<endl;
        else if(cc<0.7 && strength>5600)
        cout<<8<<endl;
        else if(hard>50 && strength>5600)
        cout<<7<<endl;
        else if(hard>50 || cc<0.7 || strength>5600)
        cout<<6<<endl;
        else
        cout<<5<<endl;
    }
	return 0;
}
