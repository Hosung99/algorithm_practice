#include <iostream>
#include <algorithm>
using namespace std;
int N, M;
int arr[9];
int board[9];
bool visited[9];
void dfs(int num, int depth)
{
	if (depth == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << board[arr[i]] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = num; i < N; i++)
	{
		if (!visited[i])
		{
			arr[depth] = i;
			visited[i] = true;
			dfs(i + 1, depth + 1);
			visited[i] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		board[i] = input;
	}
	sort(board, board + N);
	dfs(0, 0);
	return (0);
}