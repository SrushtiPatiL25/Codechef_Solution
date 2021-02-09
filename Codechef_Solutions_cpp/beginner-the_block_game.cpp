#include <iostream>
using namespace std;

int main() {
    int t,num;
    cin>>t;
    while(t--)
    {
        cin>>num;
        int num1=num;
      
        int s,rem=0;
        while(num!=0)
        {
        s=num%10;
        rem=rem*10+s;
        num=num/10;
        }
         cout<<(num1==rem ? "wins" : "loses")<<endl;
        
        }
       
	return 0;
}
