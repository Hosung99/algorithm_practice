#include <iostream>

using namespace std;
int a, b;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> a >> b;
	long long ax, ay, bx, by;
	a--;
	b--;
	ax = a / 4;
	bx = b / 4;
	ay = a % 4;
	by = b % 4;
	cout << abs(ax - bx) + abs(ay - by);
	return (0);
}