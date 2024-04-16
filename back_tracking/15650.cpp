#include <iostream>
#include <algorithm>
using namespace std;
int N,M;
int arr[9];
bool visited[9];

bool	is_desending()
{
	int min = 0;
	for(int i = 0; i < M; i++)
	{
		if (arr[i] > min)
			min = max(arr[i], min);
		else
			return (false);
	}
	return (true);
}

void	print(int depth)
{
	if (depth == M)
	{
		if (is_desending())
		{
			for (int i = 0; i < M; i++)
				cout << arr[i] << " ";
			cout << "\n";
		}
		return ;
	}
	for(int i = 1; i <= N; i++)
	{
		if(!visited[i])
		{
			arr[depth] = i;
			visited[i] = true;
			print(depth + 1);
			visited[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;
	print(0);
	return (0);
}