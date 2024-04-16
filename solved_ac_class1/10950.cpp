#include <iostream>

using namespace std;
int T;
int main()
{
	int A,B;
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << "\n";
	}
	return (0);
}