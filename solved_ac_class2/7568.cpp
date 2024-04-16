#include <iostream>
#include <vector>
using namespace std;
int N;
vector<pair<int, int>> vec;
int arr[50];
int main()
{
	int x,y;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> x >> y;
		vec.push_back({x,y});
	}
	for(int i = 0; i < N; i++)
	{
		int temp = 1;
		for(int j = 0; j < N; j++)
		{
			if (j == i)
				continue ;
			if (vec[i].first < vec[j].first && vec[i].second < vec[j].second)
				temp++;
		}
		arr[i] = temp;
	}
	for(int i = 0; i < N; i++)
		cout << arr[i] << " ";
	return (0);
}