#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int arr[300000];
double N;
double sum;
int main()
{
	cin >> N;
	double avg = round(N * 15 / 100);
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr+ (int)N);
	for (int i = 0; i < N; i++)
	{
		if (i < avg || N - avg <= i)
			continue ;
		sum += arr[i];
	}
	if (N == 0)
		cout << "0";
	else
		cout << round(sum / (N - avg * 2)) << "\n";
	return (0);
}