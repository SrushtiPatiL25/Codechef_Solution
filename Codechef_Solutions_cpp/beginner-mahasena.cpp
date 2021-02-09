#include <iostream> 
using namespace std; 
  
int main() 
{ 
  int t,num;
  cin>>t;
  int count1=0,count2=0;
  while(t--)
  {
    cin>>num;
    if(num%2==0) count1++;
    else count2++;
    
  }
  cout<<(count1>count2 ? "READY FOR BATTLE" : "NOT READY")<<endl;
  
  
   return 0; 
} 