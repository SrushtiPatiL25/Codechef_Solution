#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,num;
    cin>>t;
    while(t--)
    {
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
            
        }
        sort(arr,arr+num);
        cout<<arr[0]+arr[1]<<endl;
    }
	return 0;
}
