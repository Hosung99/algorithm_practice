#include <iostream>

using namespace std;
int N;
int arr[10002];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int input;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> input;
		arr[input]++;
	}
	for(int i = 1; i <= 10000; i++)
	{
		for(int j = 0; j < arr[i]; j++)
			cout << i << "\n";
	}
	return (0);
}