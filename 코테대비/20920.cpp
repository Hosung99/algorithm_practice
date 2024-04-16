#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int N,M;
map<string, int> m;
vector<pair<int, string>> vec;

bool comp(pair<int,string>a, pair<int,string>b)
{
	//오름차순 Return A < B
	//내림차순 Return A > B
	if (a.first == b.first)
	{
		if (a.second.length() == b.second.length())
			return a.second < b.second; // 사전순 오름차순
		else
			return a.second.length() > b.second.length(); //단어길이 내림차순
	}
	else
		return a.first > b.first;
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N >> M;
	for(int i = 0 ; i < N ; i++)
	{
		string str;
		cin >> str;
		if (str.length() < M)
			continue ;
		m[str]++;
	}
	for(auto a : m)
		vec.push_back({a.second,a.first});
	sort(vec.begin(),vec.end(),comp);
	for(auto a : vec)
		cout << a.second << "\n";
	return (0);
}