#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    float quantity,price;
    cin>>t;
    while(t--)
    {
     cin>>quantity>>price;
     if(quantity<1000)
        cout<<fixed << setprecision(6)<< quantity*price<<endl;
    else
    cout<< fixed << setprecision(6)<<(quantity*price)*0.9<<endl;
    
    }
	return 0;
}
