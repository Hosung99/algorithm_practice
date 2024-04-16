#include <iostream>
#include <cmath>
using namespace std;
int N;
unsigned long long sum;
string str;
int main()
{
	cin >> N;
	cin >> str;
	for(int i = 0; i < N; i++)
	{
		unsigned long long temp = 1;
		for(int j = 1; j <= i; j++)
		{
			temp *= 31;
			if (temp > 1234567891)
				temp %= 1234567891;
		}
		sum += ((str[i] - 96) * temp);
		if (sum > 1234567891)
			sum %= 1234567891;
	}
	cout << sum << "\n";
	return (0);
}