#include <iostream>
#include <vector>
using namespace std;
int N,M,ans=2147483647;
int board[51][51];
bool visited[51];
vector<pair<int,int>> home, chichken, vec;


int calc()
{
	int sum = 0;
	for(int i = 0; i < home.size(); i++)
	{
		int dist = 2147483647;
		for(int j = 0; j < vec.size(); j++)
		{
			int D;
			D = abs(home[i].first - vec[j].first) + abs(home[i].second - vec[j].second);
			dist = min(dist, D);
		}
		sum += dist;
	}
	return (sum);
}

void dfs(int idx, int depth)
{
	if (depth == M)
	{
		ans = min(ans, calc());
		return ;
	}
	for(int i = idx; i < chichken.size(); i++)
	{
		if (visited[i])
			continue ;
		visited[i] = true;
		vec.push_back(chichken[i]);
		dfs(i, depth + 1);
		vec.pop_back();
		visited[i] = false;
	}
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N >> M;
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 1)
				home.push_back({i, j});
			if (board[i][j] == 2)
				chichken.push_back({i, j});
		}
	}
	dfs(0, 0);
	cout << ans;
	return (0);
}