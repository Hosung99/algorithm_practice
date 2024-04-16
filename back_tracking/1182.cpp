#include <iostream>
#include <vector>
using namespace std;
int N,S,ans;
vector<int> vec;
void	solve(int depth, vector<int> t)
{
	int s = 0;
	bool check = false;
	for(int i = 0; i < t.size(); i++)
		s += t[i];
	if (depth != -1 && s == S)
	{
		ans++;
		check = true;
	}
	if (t.size() == vec.size())
	{
		for(int i = 0; i < vec.size(); i++)
			s += t[i];
		if (check == false && s == S)
			ans++;
		return ;
	}
	for(int i = depth + 1; i < vec.size(); i++)
	{
		t.push_back(vec[i]);
		solve(i, t);
		t.pop_back();
	}
}

int main()
{
	int input;
	cin >> N >> S;
	for(int i = 0; i < N; i++)
	{
		cin >> input;
		vec.push_back(input);
	}
	vector<int> tmp;
	solve(-1, tmp);
	cout << ans;
	return (0);
}