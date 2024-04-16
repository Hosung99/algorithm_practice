#include <iostream>

using namespace std;
int T,H,W,N,result; //W: 넓이 H: 높이
int main()
{
	int w;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;
		if (N % H == 0)
			result = H * 100 + (N / H);
		else
			result = (N % H) * 100 + (N / H) + 1;
		cout << result << "\n";
	}
	return (0);
}