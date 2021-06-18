#include <iostream>
using namespace std;
#define ll long long

int main() 
{
 ll t;
	  cin>>t;
	  
	  while(t--)
	  {
	      
	      ll D,d,P,Q,x;
	      cin>>D>>d>>P>>Q;
	      
	      ll counter = 0;
	      x = D/d;
	      
	      if(x%2 == 0)
	      {
	          
	          counter = d*((x/2)*(2 * P +(x-1)*Q));
	       }
	      else
	      {
	          counter = d * (x * (P+((x-1)/2)*Q));
	      }
	      
	      counter +=(D % d) * (P+(x)*Q);
	      cout<<counter<<endl;
	  }
}


