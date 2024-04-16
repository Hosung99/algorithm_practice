#include <iostream>

using namespace std;
int T;
long long arr[102];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> T;
	int N;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i <= 101; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 3];
	}
	while (T--)
	{
		cin >> N;
		cout << arr[N] << "\n";
	}
	return (0);
}