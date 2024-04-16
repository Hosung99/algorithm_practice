#include <iostream>

using namespace std;
int A,B,cnt;
int arr[10];
int main()
{
	for(int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] = arr[i] % 42;
	}
	for(int i = 0; i < 10; i++)
	{
		for(int j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j])
				break ;
			if (j == 9)
				cnt++;
		}
	}
	cout << cnt + 1;
	return (0);
}