#include <iostream>
using namespace std;
int N;
int arr[11], ans[11];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		arr[i] = input;
	}
	for (int i = 0; i < N; i++)
	{
		int j = 0;
		while (arr[i] != 0)
		{
			if (ans[j] == 0)
				arr[i]--;
			j++;
		}
		while (ans[j] != 0)
		{
			j++;
		}
		ans[j] = i + 1;
	}
	for (int i = 0; i < N; i++)
		cout << ans[i] << " ";
	return (0);
}