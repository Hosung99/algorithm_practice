#include <iostream>
#include <queue>
using namespace std;
int N,M,ans;
int arr[101][101];
bool visited[101];
queue<int> q;
int main()
{
	cin >> N >> M;
	for(int i = 0; i < M; i++)
	{
		int x,y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	q.push(1);
	visited[1]= true;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for(int i = 1; i <= N; i++)
		{
			if (arr[cur][i] && !visited[i])
			{
				q.push(i);
				visited[i] = true;
				ans++;
			}
		}
	}
	cout << ans;
	return (0);
}