#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double A,B;
int main()
{
	cin >> A >> B;
	double ans = A / B;
	cout << fixed << setprecision(10) << ans;
	return (0);
}