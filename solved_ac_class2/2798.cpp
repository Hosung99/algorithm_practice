#include <iostream>
using namespace std;
int N,M,ans;
int arr[101];

int main()
{
	cin >> N >> M;
	for(int i = 0; i < N; i++)
		cin >> arr[i];
	for(int i = 0; i < N; i++)
	{
		int tmp = arr[i];
		for(int j = i + 1; j < N; j++)
		{
			for(int k = j + 1; k < N; k++)
			{
				tmp = arr[i] + arr[j] + arr[k];
				if (tmp <= M)
					ans = max(ans, tmp);
			}
		}
	}
	cout << ans;
	return (0);
}