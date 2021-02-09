#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	float s;
	cin >> t;
	while (t--)
	{float HRA, GS, DA ;
		cin >> s;
		if (s < 1500)
		{
			HRA = s * 10 / 100;
			DA = s * 90 / 100;
		}
		else
		{
			HRA = 500;
			DA = s * 98 / 100;
		}
		GS = HRA + DA + s;
		cout << fixed << setprecision(2) << GS << endl;
	}
	return 0;
}