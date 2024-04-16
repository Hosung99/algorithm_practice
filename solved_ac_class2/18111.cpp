#include <iostream>

using namespace std;
int N,M,B,height;
int arr[500][500];
int minTime = 2147483647;
int maxHeight;
int main()
{
	cin >> N >> M >> B;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
			cin >> arr[i][j];
	}
	for(int height = 0; height <= 256; height++)
	{
		int dig = 0;
		int build = 0;
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
			{
				int block = height - arr[i][j];
				if (block < 0)
					dig += abs(block);
				else
					build += block;
			}
		}
		if (build <= dig + B)
		{
			int t = build + dig * 2;
			if (t <= minTime)
			{
				minTime = t;
				maxHeight = height;
			}
		}
	}
	cout << minTime << " " << maxHeight;
	return (0);
}