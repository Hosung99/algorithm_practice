#include <iostream>
#include <algorithm>
using namespace std;
int N,M;
int tree[1000000];


int binary_search(int left, int right)
{
	long long int ret;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		long long int total = 0;
		for(int i = 0; i < N; i++)
		{
			if (tree[i] > mid)
				total += tree[i] - mid;
		}
		if (total < M)
			right = mid - 1;
		else
		{
			ret = mid;
			left = mid + 1;
		}
	}
	return ret;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> N >> M;
	for(int i = 0; i < N; i++)
		cin >> tree[i];
	sort(tree, tree + N);
	cout << binary_search(0, tree[N - 1]);
	return (0);
}