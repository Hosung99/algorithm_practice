#include <iostream>
using namespace std;
int N, K, cnt;
string str;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> K;
	cin >> str;
	for (int i = 0; i < N; i++)
	{
		if (str[i] == 'P')
		{
			for (int j = i - K; j <= i + K; j++)
			{
				if (j >= 0 && j < N && str[j] == 'H')
				{
					str[j] = '-';
					cnt++;
					break;
				}
			}
		}
	}
	cout << cnt;
	return (0);
}