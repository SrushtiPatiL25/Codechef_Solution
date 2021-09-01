/* You have prepared four problems. 
The difficulty levels of the problems are A1,A2,A3,A4 respectively. 
A problem set comprises at least two problems and no two problems in a problem set should have the same difficulty level.
A problem can belong to at most one problem set. 
Output the maximum number of problem sets you can create using the four problems.*/


#include <iostream>
#include <iterator>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,size;
    cin>>t;
    while(t--)
    {
       set<int, greater<int> > s;
            int a[4] ;
            for(int i=0;i<4;i++){
               // int n ; 
               cin>>a[i];
              //  a[i] = n;
                s.insert(a[i]);
            }
            int size = s.size();
            if(size==4 || size==3){
               cout << 2 <<'\n';
            }
            else if(size==2){                                       
                sort(a,a+4);                                    //for eg if input is 2 3 2 3
                if(a[0]==a[1]&&a[2]==a[3])cout << 2 <<'\n';     //after sorting bcmz 2 2 3 3 so there can be 2 problem sets (2 3)(2 3) 
                else cout << 1 <<'\n';                          //if input is 2 3 3 3 here only one problem set can be formed(2 3).
            }                                                   //So need to perform an extra check here.
            else cout << 0 <<'\n';
        }
    return 0;
}
