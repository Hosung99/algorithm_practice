#include <iostream>
#include <map>
using namespace std;
map<string, string> m;
int N,M;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	string address,password;
	for(int i = 0; i < N; i++)
	{
		cin >> address >> password;
		m.insert({address,password});
	}
	for(int i = 0; i < M; i++)
	{
		cin >> password;
		map<string, string>::iterator iter = m.find(password);
		cout << iter->second << "\n";
	}
	return (0);
}