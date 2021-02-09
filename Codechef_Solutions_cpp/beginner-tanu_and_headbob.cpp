#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int I=0, Y=0, N=0; 
        for(int i=0;i<n;i++){
            if(s[i]=='I')
                I++;
            else if(s[i]=='Y')
                Y++;
            else
                N++;    
        }

        if(I==0 && Y==0)
            cout << "NOT SURE" << endl;
        else if(I==0 && Y!=0)
            cout << "NOT INDIAN" << endl;
        else 
            cout << "INDIAN" << endl;
    }
}