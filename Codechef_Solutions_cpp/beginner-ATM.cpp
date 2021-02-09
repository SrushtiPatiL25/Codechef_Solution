#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
    int withdraw;
    float balance;
    cin>>withdraw>>balance;
    
    if(withdraw+0.5>balance)
    {
        cout<< fixed << setprecision(2) <<balance;
    }
    else if(withdraw%5!=0)
    {
        cout<< fixed << setprecision(2) <<balance;
    }
    else
        cout<< fixed << setprecision(2) <<balance-withdraw-0.5;
	return 0;
}
