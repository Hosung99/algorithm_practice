#include <iostream>

using namespace std;
int N;
int main()
{
	cin >> N;
	int r;
	for (int i = 1; i <= 9; i++)
		cout << N << " * " << i << " = " << N * i << "\n";
	return (0);
}