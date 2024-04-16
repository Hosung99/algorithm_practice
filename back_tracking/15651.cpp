#include <iostream>
#include <vector>
using namespace std;
int N,M;
vector<int> vec;

void	solve(int depth)
{
	if (depth == M)
	{
		for(int i = 0; i < vec.size(); i++)
			cout << vec[i] << " ";
		cout << "\n";
		return ;
	}
	for(int i = 1; i <= N; i++)
	{
		vec.push_back(i);
		solve(depth + 1);
		vec.pop_back();
	}
}

int main()
{
	cin >> N >> M;
	solve(0);
	return (0);
}