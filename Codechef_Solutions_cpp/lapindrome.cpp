#include <iostream>

using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int len=s.length();
    
    int leftarr[26]={0};
    for(int i=0;i<len/2;i++)
    {
       int ind=s[i]-'a';
       leftarr[ind]++;
    }
    
    int rightarr[26]={0};
    for(int i=(len+1)/2;i<len;i++)
    {
       int ind=s[i]-'a';
       rightarr[ind]++;
    }
    int val=0;
    for(int i=0;i<26;i++)
    {
       if( leftarr[i]!=rightarr[i])
       {val=1;
       break;}
       
      
    }
    if(val==1) cout<<"NO"<<endl;
    else  cout<<"YES"<<endl;
}
	return 0;
}
