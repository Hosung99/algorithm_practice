#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int N;
vector<int> vec[100001];
queue<int> q;
int visited[100001];

void bfs()
{
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (int i = 0; i < vec[cur].size(); i++)
		{
			int next = vec[cur][i];
			if (visited[cur] == next)
				continue;
			q.push(next);
			visited[next] = cur;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 1; i < N; i++)
	{
		int p, v;
		cin >> p >> v;
		vec[p].push_back(v);
		vec[v].push_back(p);
	}
	q.push(1);
	bfs();
	for (int i = 2; i <= N; i++)
		cout << visited[i] << "\n";
	return (0);
}