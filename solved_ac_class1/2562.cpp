#include <iostream>
using namespace std;
int arr[9];
int ans,ans_idx;
int main()
{
	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	for (int i = 0; i < 9; i++)
	{
		if (ans < arr[i])
		{
			ans = arr[i];
			ans_idx = i;
		}
	}
	cout << ans << "\n" << ans_idx + 1;
	return (0);
}