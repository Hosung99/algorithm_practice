#include <iostream>
#include <queue>
#define INF 2147483647
using namespace std;

int V,E,K;
//	{비용, 목적지 노드}
vector	<pair<int, int> > board[20001];
priority_queue<pair<int, int> >q;
int		dist[20001];
void dijkstra();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int u,v,w;
	cin >> V >> E >> K;
	for (int i = 0; i < E; i++)
	{
		cin >> u >> v >> w;
		board[u].push_back(make_pair(w,v));
	}
	for (int i = 1; i < V + 1; i++)
        dist[i] = INF;
	dist[K] = 0;
	q.push(make_pair(0, K));
	dijkstra();
	for (int i = 1; i < V + 1; i++)
	{
		if (dist[i] == INF)
			cout << "INF\n";
		else
			cout << dist[i] << "\n";
	}
	return (0);
}

void dijkstra()
{
	while(!q.empty())
	{
		pair<int, int> curr = q.top();
		q.pop();
		if (dist[curr.second] < -curr.first)
			continue ;
		for (int i = 0 ; i < board[curr.second].size(); i++)
		{
			int next_node = board[curr.second][i].second;
			int next_dist = -curr.first + board[curr.second][i].first;
			if (dist[next_node] > next_dist)
			{
				dist[next_node] = next_dist;
				q.push(make_pair(-next_dist, next_node));
			}
		}
	}
}