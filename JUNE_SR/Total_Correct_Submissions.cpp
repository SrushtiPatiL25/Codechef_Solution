#include <iostream>
#include<string.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<string,int>m;
        int count =3;
        while(count--)
        {
            for(int i=0;i<n;i++)
            {
                string s;
                int x;
                cin>>s>>x;
                m[s]+=x;
            }
        }
            vector<int>ans;
            for (auto x : m)
                ans.push_back(x.second);
            sort(ans.begin(),ans.end());
            for(auto x:ans)
                cout<<x<<" ";
            cout<<endl;

    }
    
	return 0;
}
