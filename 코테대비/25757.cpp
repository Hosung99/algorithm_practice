#include <iostream>
#include <map>
using namespace std;
int N;
string str;
map<string, int> m;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string name;
	cin >> N >> str;
	while (N--)
	{
		cin >> name;
		m[name]++;
	}
	if (str == "Y")
		cout << m.size() / 1;
	else if (str == "F")
		cout << m.size() / 2;
	else
		cout << m.size() / 3;
	return (0);
}