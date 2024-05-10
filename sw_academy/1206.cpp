#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	for (int i = 1; i <= 10; i++)
	{
		int N;
		int ans = 0;
		vector<int> vec;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			int num;
			cin >> num;
			vec.push_back(num);
		}
		for (int i = 2; i < N - 2; i++)
		{
			if (vec[i] > vec[i - 1] && vec[i] > vec[i - 2])
			{
				if (vec[i] > vec[i + 1] && vec[i] > vec[i + 2])
				{
					int temp = 0;
					temp = max(vec[i - 1], vec[i - 2]);
					temp = max(temp, vec[i + 1]);
					temp = max(temp, vec[i + 2]);
					ans += vec[i] - temp;
				}
			}
		}
		cout << "#" << i << " " << ans;
	}
	return (0);
}