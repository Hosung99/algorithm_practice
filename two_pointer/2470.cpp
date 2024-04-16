#include <iostream>
#include <algorithm>
using namespace std;
int N,start_idx,end_idx,temp,temp_a,temp_b;
int arr[100000];
int main(void)
{
	cout.tie(0);
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	long long a;
	end_idx = N - 1;
	sort(arr,arr+N);
	temp = 2147483647;
	while (start_idx < end_idx)
	{
		a = arr[start_idx] + arr[end_idx];
		if (abs(a) < temp)
		{
			temp = abs(a);
			temp_a = arr[start_idx];
			temp_b = arr[end_idx];
			if (temp == 0)
				break ;
		}
		if (a < 0)
			start_idx++;
		else
			end_idx--;
	}
	if (temp_a < temp_b)
		cout << temp_a << " " << temp_b;
	else
		cout << temp_b << " " << temp_a;
	return (0);
}