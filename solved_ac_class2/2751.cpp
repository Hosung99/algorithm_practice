#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector<int> vec;
int main()
{
	cin >> N;
	int tmp;
	for(int i = 0 ; i < N; i++)
	{
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	for(int i = 0; i < N; i++)
		cout << vec[i] << "\n";
	return (0);
}