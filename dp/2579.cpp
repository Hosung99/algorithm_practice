#include <iostream>

using namespace std;
int N,cnt;
int stairs[301];
int tables[301][3]; // table[i][j] = 현재까지 j개의 계단을 연속해서 밟고 i번째 계단까지 올라섰을때 점수 합의 최대값.
int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> stairs[i];
	tables[1][1] = stairs[1];
	tables[2][1] = stairs[2];
	tables[2][2] = tables[1][1] + stairs[2];
	for(int i = 3; i <= N; i++)
	{
		tables[i][1] = max(tables[i - 2][1], tables[i - 2][2]) + stairs[i];
		tables[i][2] = tables[i - 1][1] + stairs[i];
	}
	cout << max(tables[N][1], tables[N][2]);
	return (0);
}