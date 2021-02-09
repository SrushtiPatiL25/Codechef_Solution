#include <iostream>
using namespace std;


int sum(int val) {
    return (val*(val + 1)) / 2;
}

int main() {
    int t;
    cin>>t;
   int times,num;
    while(t--)
    {
         int times, n, res;
        cin >> times >> n;
         
        res = n;
         
        for(int i = 1; i <= times; ++i) {
            res = sum(res);
        }
        cout << res << endl;
    }
	return 0;
}
