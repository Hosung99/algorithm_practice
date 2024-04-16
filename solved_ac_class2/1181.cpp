#include <iostream>
#include <algorithm>
using namespace std;
int N;
vector<pair<int, string>> vec;
int main()
{
	string tmp;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.push_back({tmp.length(), tmp});
	}
	std::sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(),vec.end()),vec.end());
	for(size_t i = 0; i < vec.size(); i++)
		cout << vec[i].second << "\n";
	return (0);
}