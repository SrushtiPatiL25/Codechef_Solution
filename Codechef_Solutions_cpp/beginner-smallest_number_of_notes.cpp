#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int t,p ;
    cin>>t;
    int arr[6]={1,2,5,10,50,100};
    while(t--)
    {
        cin>>p;
        int count=0;
        for(int i=5;i>=0;i--)
        {
            int x=arr[i];
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