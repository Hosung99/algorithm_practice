#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int N;
vector<double> vec;
int main()
{
	cin >> N;
	int tmp;
	for(int i = 0 ; i < N; i++)
	{
		cin >> tmp;
		vec.push_back(tmp);
	}
	int mx = *max_element(vec.begin(),vec.end());
	double m;
	for(int i = 0; i < N; i++)
	{
		vec[i] = vec[i] / (double)mx * 100;
		m += vec[i];
	}
	cout << fixed << setprecision(9) << m / vec.size();
	return (0);
}