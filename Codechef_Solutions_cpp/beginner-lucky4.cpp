#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int t;
    cin>>t;
   int num;
    while(t--)
    {
        
       
        cin>>num;
        int c=0;
        while(num!=0)
        {
            int n=num%10;
            num=num/10;
            if(n==4)
            c++;
            
        }
        cout<<c<<endl;
        
    }
    
	return 0;
}
