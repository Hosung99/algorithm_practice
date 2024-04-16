#include <iostream>
#include <cmath>
using namespace std;
int D,H,W;
int main()
{
	cin >> D >> H >> W;
	cout << (int)(D / sqrt(pow(H,2) + pow(W, 2)) * H) << " " << (int)(D / sqrt(pow(H,2) + pow(W,2)) * W);
	return (0);
}