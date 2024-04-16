#include <iostream>
using namespace std;
int N;
int main()
{
	cin >> N;
	int layer = 1;
	unsigned long long temp = 0;
	unsigned long long	mx = 1;
	for(int i = 1; i <= N; i++)
	{
		if (mx < i)
		{
			temp += 6;
			mx += temp;
			layer++;
		}
	}
	cout << layer;
	return (0);
}