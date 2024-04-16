#include <iostream>

using namespace std;
int N;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string str;
	cin >> N;
	cin.ignore();
	for (int i = 1; i <= N; i++)
	{
		getline(cin, str);
		cout << i << ". " << str << "\n";
	}
	return (0);
}