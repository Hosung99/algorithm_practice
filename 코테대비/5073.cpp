#include <iostream>

using namespace std;
int A,B,C;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	while(1)
	{
		cin >> A >> B >> C;
		if (A == 0 && B == 0 && C == 0)
			break ;
		if (A == B && A == C)
			cout << "Equilateral\n";
		else if ((A == B && A != C) || (B == C && A != B) || (A == C && B != C))
		{
			if (A == B && (A + B <= C))
				cout << "Invalid\n";
			else if (B == C && (B + C <= A))
				cout << "Invalid\n";
			else if (A == C && (A + C <= B))
				cout << "Invalid\n";
			else
				cout << "Isosceles\n";
		}
		else
		{
			if (A > B && A > C)
			{
				if (A >= B + C)
					cout << "Invalid\n";
				else
					cout << "Scalene\n";
			}
			else if (B > A && B > C)
			{
				if (B >= A + C)
					cout << "Invalid\n";
				else
					cout << "Scalene\n";
			}
			else
			{
				if (C >= A + B)
					cout << "Invalid\n";
				else
					cout << "Scalene\n";
			}
		}
	}
	return (0);
}