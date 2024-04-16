#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
queue<int> q;
int N;
int dist[1000002]; //dist[i] = i가 1로 나누어 떨어지는 횟수의 최대값.
int main()
{
	cin >> N;
	dist[1] = 0;
	dist[2] = 1;
	dist[3] = 1;
	q.push(N);
	for(int i = 4; i <= N; i++)
	{
		dist[i] = dist[i - 1] + 1;
		if (i % 3 == 0)
			dist[i] = min(dist[i / 3] + 1, dist[i]);
		if (i % 2 == 0)
			dist[i] = min(dist[i / 2] + 1, dist[i]);
	}
	for (int i = N; i > 1;)
	{
		if (i % 3 == 0)
		{
			if (i % 2 == 0)
			{
				if (dist[i / 3] > dist[i / 2])
					i /= 2;
				else
					i /= 3;
			}
			else if (dist[i - 1] < dist[i / 3])
				i--;
			else
				i /= 3;
			q.push(i);
		}
		else if (i % 2 == 0)
		{
			if (dist[i - 1] < dist[i / 2])
				i--;
			else
				i /= 2;
			q.push(i);
		}
		else
		{
			i--;
			q.push(i);
		}
	}
	cout << dist[N] << "\n";
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	return (0);
}