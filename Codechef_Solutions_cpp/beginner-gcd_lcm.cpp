#include <iostream>
using namespace std;

long long int gcd(int a, int b) {
   if (a == 0 || b == 0)
   return 0;
   else if (a == b)
   return a;
   else if (a > b)
   return gcd(a-b, b);
   else return gcd(a, b-a);
}
int main() {
    long long int num1,num2;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>num1>>num2;
       
        cout<< gcd(num1,num2)<<" "<<(num1*num2) / gcd(num1, num2)<<endl;
        
    }
	return 0;
}
