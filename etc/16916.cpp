#include <iostream>
#include <cstring>
using namespace std;

string str;
string f;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> str >> f;
	if (strstr(str.c_str(), f.c_str()) == NULL)
		cout << "0";
	else
		cout << "1";
	return (0);
}