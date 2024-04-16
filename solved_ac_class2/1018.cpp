#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int M,N,cnt;
char c[50][50];
string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
int	check_WB(int i, int j)
{
	int area = 0;
	for (int k = 0; k < 8; k++)
	{
		for (int l = 0; l < 8; l++)
		{
			if (c[i + k][j + l] != WB[k][l])
				area++;
		}
	}
	return (area);
}

int check_BW(int i, int j)
{
	int area = 0;
	for(int k = 0; k < 8; k++)
	{
		for(int l = 0; l < 8; l++)
		{
			if(c[i + k][j + l] != BW[k][l])
				area++;
		}
	}
	return (area);
}

int main()
{
	cnt = 2147483647;
	cin >> N >> M;
	for(int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> c[i][j];
	for(int i = 0; i <= abs(N - 8); i++)
	{
		for(int j = 0; j <= abs(M - 8); j++)
		{
			cnt = min(cnt, check_WB(i,j));
			cnt = min(cnt, check_BW(i,j));
		}
	}
	cout << cnt;
	return (0);
}