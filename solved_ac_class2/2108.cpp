#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int N,sum;
bool flag;
vector<int> vec;
int arr[8001];
int mx[2];
int main()
{
	int input;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> input;
		vec.push_back(input);
		sum += vec[i];
		arr[input + 4000]++;
	}
	sort(vec.begin(), vec.end());
	for(int i = 0; i < 8001; i++)
	{
		if (mx[0] == arr[i])
		{
			if (flag)
			{
				mx[1] = i - 4000;
				flag = false;
			}
		}
		else if (mx[0] < arr[i])
		{
			mx[0] = arr[i];
			mx[1] = i - 4000;
			flag = true;
		}
	}
	if (round(float(sum) / N) == -0)
		cout << "0\n";
	else
		cout << round((float)sum / N) << "\n";
	cout << vec[N / 2] << "\n";
	cout << mx[1] << "\n";
	cout << vec.back() - vec.front();
	return (0);
}