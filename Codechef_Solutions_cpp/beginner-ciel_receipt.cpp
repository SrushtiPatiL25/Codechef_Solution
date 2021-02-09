#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int t,p ;
    cin>>t;
    while(t--)
    {
        cin>>p;
        int count=0;
        for(int i=11;i>=0;i--)
        {
            int x=pow(2,i);
            while(p>=x)
            {
                count++;
                p-=x;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
