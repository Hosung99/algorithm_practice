#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int N, M, P, cnt;
set<int> s;
int arr[51][51];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M >> P;
	for (int i = 0; i < 51; i++)
	{
		for (int j = 0; j < 51; j++)
			arr[i][j] = -1;
	}
	for (int i = 0; i < P; i++)
	{
		int input;
		cin >> input;
		s.insert(input);
	}
	int t = -1;
	while (++t < M)
	{
		int input;
		cin >> input;
		for (int i = 0; i < input; i++)
		{
			int temp;
			cin >> temp;
			arr[t][i] = temp;
		}
	}
	int L = 50;
	while (L--)
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < 51; j++)
			{
				if (arr[i][j] == -1)
					break;
				if (find(s.begin(), s.end(), arr[i][j]) != s.end())
				{
					for (int k = 0; k < 51; k++)
					{
						if (arr[i][k] == -1)
							break;
						s.insert(arr[i][k]);
					}
					break;
				}
			}
		}
	}
	for (int i = 0; i < M; i++)
	{
		bool flag = true;
		for (int j = 0; j < 51; j++)
		{
			if (arr[i][j] == -1)
				break;
			if (find(s.begin(), s.end(), arr[i][j]) != s.end())
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cnt++;
	}
	cout << cnt;
	return (0);
}