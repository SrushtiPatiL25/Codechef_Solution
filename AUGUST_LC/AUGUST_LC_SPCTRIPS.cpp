#include <iostream>
using namespace std;

int main() {
    int n,t,num1,num2,num3;
    
    cin>>t;
    while(t--)
    {
        int triplet_count=0;
        cin>>n;
        //cin>>num1>>num2>>num3;
        for(num3=1;num3<=n;num3++)
        {
            for(num2=num3;num2<=n;num2+=num3)
            {
                if(num2%num3==0)
                {
                    for(num1=num3;num1<=n;num1+=num2)
                    {
                        if(num1%num2==num3)
                            triplet_count++;   
                    }
                    
                }
                
                
            }
            
            
        }
        cout<<triplet_count<<endl;
        
    }
	return 0;
}
