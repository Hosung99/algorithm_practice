#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int T;

void bfs(int start, int end)
{
	queue<pair<int, string>> q;
	bool visited[10000];
	memset(visited, false, sizeof(visited));
	q.push({start, ""});
	visited[start] = true;
	while (!q.empty())
	{
		int cur = q.front().first;
		string str = q.front().second;
		q.pop();
		if (cur == end)
		{
			cout << str << "\n";
			break ;
		}
		int D = cur * 2 % 10000;
		if (!visited[D])
		{
			visited[D] = true;
			q.push({D, str + "D"});
		}

		int S = cur - 1;
		if (S == -1)
			S = 9999;
		if (!visited[S])
		{
			visited[S] = true;
			q.push({S, str + "S"});
		}

		int L = (cur % 1000) * 10 + (cur / 1000);
		if (!visited[L])
		{
			visited[L] = true;
			q.push({L, str + "L"});
		}

		int R = (cur / 10) + (cur % 10) * 1000;
		if (!visited[R])
		{
			visited[R] = true;
			q.push({R, str + "R"});
		}
	}
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> T;
	while(T--)
	{
		int start,result;
		cin >> start >> result;
		bfs(start, result);
	}
	return (0);
}