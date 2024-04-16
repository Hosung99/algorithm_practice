#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, string>> v;
int N;

bool cmp(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int age;
	string name;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> age >> name;
		v.push_back({age,name});
	}
	sort(v.begin(),v.end(),cmp);
	for(int i = 0; i < N; i++)
		cout << v[i].first << " " << v[i].second << "\n";
	return (0);
}