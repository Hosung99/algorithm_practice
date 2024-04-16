#include <iostream>

using namespace std;
int K,N,T;
int arr[15][15];
int main()
{
	cin >> T;
	for(int i = 1; i <= 14; i++)
		arr[0][i] = i;
	for(int i = 1; i <= 14; i++)
	{
		for(int j = 1; j <= 14; j++)
		{
			for(int k = 1; k <= j; k++)
				arr[i][j] += arr[i - 1][k];
		}
	}
	for(int i = 0; i < T; i++)
	{
		cin >> K >> N;
		cout << arr[K][N] << "\n";
	}
	return (0);
}