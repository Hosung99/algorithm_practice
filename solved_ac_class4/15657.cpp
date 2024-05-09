#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M, board[8], cnt;
bool visited[9];
vector<int> vec;
void dfs(int depth, int index)
{
	if (depth == M)
	{
		for(int i = 0; i < vec.size(); i++)
			cout << vec[i] << " ";
		cout << "\n";
		return ;
	}
	for(int i = index; i < N; i++)
	{
		vec.push_back(board[i]);
		dfs(depth + 1, i);
		vec.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> board[i];
	sort(board, board + N);
	dfs(0, 0);
	return (0);
}