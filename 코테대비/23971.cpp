#include <iostream>

using namespace std;
int W,H,N,M,ans;

int main()
{
	cin >> H >> W >> N >> M;
	for(int i = 0; i < H; i += N + 1)
	{
		for(int j = 0; j < W; j += M + 1)
			ans++;
	}
	cout << ans;
	return (0);
}