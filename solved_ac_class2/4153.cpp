#include <iostream>
#include <math.h>
using namespace std;
int A,B,C;
int main()
{
	while(1)
	{
		cin >> A >> B >> C;
		if (A == 0 && B == 0 && C == 0)
			break ;
		int mx = max(A,B);
		mx = max(mx,C);
		int sum = 0;
		if (A != mx)
			sum += pow(A,2);
		if (B != mx)
			sum += pow(B,2);
		if (C != mx)
			sum += pow(C,2);
		if (pow(mx,2) == sum)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return (0);
}