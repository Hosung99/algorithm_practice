#include <iostream>

using namespace std;
int T, N, M;
long long arr[31][31];
int main()
{
	cin >> T;
	for (int i = 0; i < 30; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
		for (int j = 1; j < i; j++)
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
	}
	for (int i = 0; i < T; i++)
	{
		cin >> M >> N;
		cout << arr[N][M] << "\n";
	}
	return (0);
}