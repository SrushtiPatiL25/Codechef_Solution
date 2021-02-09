#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int num1,num2,min,max;;
    while(t--)
    {
        cin>>num1>>num2;
        max=num1+num2;
        if(num1>=num2) min=num1;
        else min=num2;
        cout<<min<<" "<<max<<endl;
    }
	return 0;
}
