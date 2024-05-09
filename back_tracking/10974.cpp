#include <iostream>
#include <vector>
using namespace std;
int N;
bool visited[9];
vector<int> vec;
void dfs(int depth)
{
	if (depth == N)
	{
		for (int i = 0; i < vec.size(); i++)
			cout << vec[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			vec.push_back(i);
			dfs(depth + 1);
			vec.pop_back();
			visited[i] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	dfs(0);
	return (0);
}