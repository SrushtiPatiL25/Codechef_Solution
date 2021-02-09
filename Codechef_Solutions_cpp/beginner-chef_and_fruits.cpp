#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,o,k;
        cin>>a>>o>>k;
        while(k>0)
        {
            if(a>o)
            {
                o++;
                k--;
            }
            else if(a<o)
            {
                a++;
                k--;
            }
            else if(a==o)
            {
                a++;
                k--;
                if(a>o)
                {
                    o++;
                    k--;
                }
                else
                {
                    a++;
                    k--;
                }
                
            }
            
        }
        int res=abs(a-o);
        cout<<res<<endl;
        
    }
	return 0;
}
