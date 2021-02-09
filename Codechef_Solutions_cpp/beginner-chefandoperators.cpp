#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    long long int num1,num2;
    while(t--)
    {
        cin>>num1>>num2;
        if(num1>num2) cout<<">"<<endl;
        else if(num1<num2) cout<<"<"<<endl;
        else cout<<"="<<endl;
    }
	return 0;
}
