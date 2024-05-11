#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int T;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> T;
	while (T--)
	{
		int N,temp;
		long long ans = 0;
		vector<int> vec;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			int input;
			cin >> input;
			vec.push_back(input);
		}
		temp = vec[N - 1];
		for (int i = N - 2; i >= 0; i--)
		{
			if (vec[i] < temp)
			{
				ans += temp - vec[i];
			}
			else
			{
				temp = vec[i];
			}
		}
		cout << ans << "\n";
	}
	return (0);
}