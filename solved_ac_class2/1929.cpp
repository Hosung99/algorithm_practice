#include <iostream>

using namespace std;
int M,N;
bool arr[1000000];
int main()
{
	cin >> M >> N;
	int p;
	arr[0] = true;
	arr[1] = true;
	for(int i = 2; i * i <= N; i++)
	{
		if (arr[i] == false)
		{
			for(int j = i*i; j <= N; j+=i)
				arr[j] = true;
		}
	}
	for(int i = M; i <= N; i++)
	{
		if (arr[i] == false)
			cout << i << "\n";
	}
	return (0);
}