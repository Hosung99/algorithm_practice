#include <iostream>
#include <cstring>
using namespace std;
int N;
int board[101][101];
int ans[101][101];
bool visited[101];

void dfs(int index)
{
	for(int i = 1; i <= N; i++)
	{
		if (!visited[i] && board[index][i])
		{
			visited[i] = true;
			dfs(i);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int input;
		for (int j = 1; j <= N; j++)
		{
			cin >> input;
			if (input == 1)
				board[i][j] = 1;
		}
	}
	for (int i = 1; i <= N; i++)
	{
		memset(visited, 0, sizeof(visited));
		dfs(i);
		for(int j = 1; j <= N; j++)
		{
			if (visited[j])
				ans[i][j] = 1;
		}
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	return (0);
}