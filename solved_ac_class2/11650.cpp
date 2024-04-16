#include <iostream>
#include <algorithm>
using namespace std;
vector<pair<int, int >> vec;
int N;
int main()
{
	pair<int,int> p;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> p.first >> p.second;
		vec.push_back({p.first, p.second});
	}
	sort(vec.begin(),vec.end());
	for(int i = 0 ; i< N; i++)
		cout << vec[i].first << " " << vec[i].second << "\n";
	return (0);
}