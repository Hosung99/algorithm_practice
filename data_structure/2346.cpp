#include <iostream>
#include <deque>
using namespace std;
int N;
deque<pair<int, int>> deq;
deque<int> ans;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> N;
	int temp;
	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		deq.push_back({i, temp});
	}
	while (!deq.empty())
	{
		temp = deq.front().second;
		ans.push_back(deq.front().first);
		deq.pop_front();
		if (temp > 0)
		{
			for (int i = 0; i < temp - 1; i++)
			{
				deq.push_back(deq.front());
				deq.pop_front();
			}
		}
		else
		{
			for (int i = 0; i < abs(temp); i++)
			{
				deq.push_front(deq.back());
				deq.pop_back();
			}
		}
	}
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	return (0);
}