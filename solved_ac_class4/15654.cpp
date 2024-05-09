#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,M,board[8];
bool visited[9];
vector<int> vec;
void dfs(int depth)
{
	if (depth == M)
	{
		for(int i = 0; i < vec.size(); i++)
			cout << vec[i] << " ";
		cout << "\n";
		return ;
	}
	for(int i = 0; i < N; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			vec.push_back(board[i]);
			dfs(depth + 1);
			visited[i] = false;
			vec.pop_back();
		}
	}
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N >> M;
	for(int i = 0; i < N; i++)
		cin >> board[i];
	sort(board, board + N);
	dfs(0);
	return (0);
}