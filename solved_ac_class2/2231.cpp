#include <iostream>

using namespace std;
int N;
int main()
{
	cin >> N;
	for(int i = 1; i <= N; i++)
	{
		int sum = 0;
		int temp = i;
		sum += temp;
		while (temp != 0)
		{
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == N)
		{
			cout << i;
			return (0);
		}
	}
	cout << "0";
	return (0);
}
