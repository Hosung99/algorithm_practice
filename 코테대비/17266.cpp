#include <iostream>
using namespace std;
int N,M;
int arr[100001];

int binary_search()
{
	int ans = 2147483647;
	int left = 0;
	int right = 100000;
	while (left <= right)
	{
		bool flag = false;
		int mid = (left + right) / 2;
		if (arr[0] - mid > 0)
			flag = true;
		for(int i = 0; i < M - 1; i++)
		{
			if (arr[i] + mid < arr[i + 1] - mid)
			{
				flag = true;
				break ;
			}
		}
		if (arr[M - 1] + mid < N)
			flag = true;
		if (flag)
			left = mid + 1;
		else
		{
			ans = min(ans, mid);
			right = mid - 1;
		}
	}
	return (ans);
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < M; i++)
		cin >> arr[i];
	int ans = binary_search();
	cout << ans;
	return (0);
}