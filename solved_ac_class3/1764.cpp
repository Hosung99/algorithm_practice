#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
map<string, bool> m;
vector<string> vec;
int N,M;
int main()
{
	string temp;
	cin >> N >> M;
	for(int i = 0; i < N; i++)
	{
		cin >> temp;
		m[temp] = true;
	}
	for(int i = 0; i < M; i++)
	{
		cin >> temp;
		if (m[temp])
			vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	cout << vec.size() << "\n";
	for(int i = 0; i < vec.size(); i++)
		cout << vec[i] << "\n";
	return (0);
}