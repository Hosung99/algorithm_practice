#include <iostream>

using namespace std;
int arr[101];
int N, C;

void man(int number)
{
	for (int i = number; i <= N; i += number)
	{
		if (arr[i])
			arr[i] = 0;
		else
			arr[i] = 1;
	}
}

void woman(int number)
{
	int left = number;
	int right = number;
	while (1)
	{
		if (left <= 1 || right >= N)
			break;
		if (arr[left - 1] != arr[right + 1])
			break;
		left--;
		right++;
	}
 	for (int i = left; i <= right; i++)
	{
		if (arr[i])
			arr[i] = 0;
		else
			arr[i] = 1;
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];
	cin >> C;
	int gender, number;
	while (C--)
	{
		cin >> gender >> number;
		if (gender == 1)
			man(number);
		else
			woman(number);
	}
	for (int i = 1; i <= N; i++)
	{
		cout << arr[i];
		if (i % 20 == 0)
			cout << "\n";
		else if (i != N)
			cout << " ";
	}
	return (0);
}