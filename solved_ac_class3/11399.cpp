#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int calc[1000];
int N;
int ans;
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
			calc[i] += arr[j];
	}
	for (int i = 0; i < N; i++)
		ans += calc[i];
	cout << ans;
	return (0);
}