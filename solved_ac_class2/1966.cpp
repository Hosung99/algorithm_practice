#include <iostream>
#include <deque>
using namespace std;
int T,N,M;
int arr[100];
deque<pair<int, bool>> q;
int main()
{
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		cin >> N >> M;
		int input,temp = 0;
		for(int j = 0; j < N; j++)
		{
			cin >> input;
			if (j == M)
				q.push_back({input, true});
			else
				q.push_back({input, false});
			temp = max(input, temp);
		}
		int cnt = 1;
		while (!q.empty())
		{
			if (temp != q.front().first)
			{
				q.push_back(q.front());
				q.pop_front();
			}
			else
			{
				if (q.front().second == true)
				{
					cout << cnt << "\n";
					break ;
				}
				cnt++;
				q.pop_front();
				temp = 0;
				for(int i = 0; i < q.size(); i++)
					temp = max(temp, q[i].first);
			}
		}
		while (!q.empty())
			q.pop_back();
	}
	return (0);
}