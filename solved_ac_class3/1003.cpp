#include <iostream>

using namespace std;
int T;
int cnt_0[41];
int cnt_1[41];
int main()
{
	cin >> T;
	cnt_0[0] = 1;
	cnt_1[1] = 1;
	for(int i = 2; i <= 40; i++)
	{
		cnt_0[i] = cnt_0[i - 1] + cnt_0[i - 2];
		cnt_1[i] = cnt_1[i - 1] + cnt_1[i - 2];
	}
	for(int i = 0; i < T; i++)
	{
		int temp;
		cin >> temp;
		cout << cnt_0[temp] << " " << cnt_1[temp] << "\n";
	}
	return (0);
}

//     0
	// 1 0

//		1
	// 0 1
	// 	2
	// 1 1
	// 	3

	// 1 = [2 + 1]
	// 	4
	// [3 + 2]

//