#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int T;
int main()
{
	cin >> T;
	while (T--)
	{
		int number, input;
		int score = 1;
		int arr[1001];
		int temp[1001];
		int ans[1001];
		memset(arr, 0, sizeof(arr));
		memset(temp, 0, sizeof(temp));
		memset(ans, 0, sizeof(ans));
		vector<vector<int>> vec(1001, vector<int>(1));
		cin >> number;
		for (int i = 1; i <= number; i++)
		{
			cin >> input;
			arr[input]++;
			temp[i] = input;
		}
		for (int i = 1; i <= number; i++)
		{
			if (arr[i] < 6)
				arr[i] = 0;
		}
		for (int i = 1; i <= number; i++)
		{
			if (arr[temp[i]] == 0)
				temp[i] = 0;
			if (temp[i] != 0)
				vec[temp[i]].push_back(score++);
		}
		for (int i = 1; i <= number; i++)
		{
			if (vec[i].size() == 7)
				ans[i] = vec[i][1] + vec[i][2] + vec[i][3] + vec[i][4];
		}
		pair<int, int> p = {2147483647, 0};
		for (int i = 1; i <= 1000; i++)
		{
			if (ans[i] != 0)
			{
				if (ans[i] < p.first)
				{
					p.first = ans[i];
					p.second = i;
				}
				else if (ans[i] == p.first)
				{
					if (vec[i][5] < vec[p.second][5])
					{
						p.second = i;
					}
				}
			}
		}
		cout << p.second << endl;
	}
	return (0);
}