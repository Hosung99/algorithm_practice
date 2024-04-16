#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> burger;
vector<int> drink;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int temp;
	for(int i = 0; i < 3; i++)
	{
		cin >> temp;
		burger.push_back(temp);
	}
	for(int i = 0; i < 2; i++)
	{
		cin >> temp;
		drink.push_back(temp);
	}
	sort(burger.begin(),burger.end());
	sort(drink.begin(),drink.end());
	cout << burger.front() + drink.front() - 50;
	return (0);
}