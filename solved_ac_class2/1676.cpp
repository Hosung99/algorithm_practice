#include <iostream>

using namespace std;
int N,cnt;
int main()
{
	cin >> N;
	for(int i = 2; i <= N; i++)
	{
		if (i % 5 == 0)
		{
			int temp = i;
			while (temp > 1)
			{
				if (temp % 5 != 0)
					break ;
				temp /= 5;
				cnt++;
			}
		}
	}
	cout << cnt;
	return (0);
}