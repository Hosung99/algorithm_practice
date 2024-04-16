#include <iostream>
#include <math.h>
using namespace std;
int N,cnt;
int check[16];

bool check_queen(int depth)
{
	for(int i = 0; i < depth; i++)
	{
		if (check[i] == check[depth] || abs(check[depth] - check[i]) == depth - i)
			return false;
	}
	return (true);
}

void	queen(int depth)
{
	if (depth == N)
	{
		cnt++;
		return ;
	}
	for(int i = 0; i < N; i++)
	{
		check[depth] = i;
		if (check_queen(depth))
			queen(depth + 1);
	}
}

int main()
{
	cin >> N;
	queen(0);
	cout << cnt;
	return (0);
}