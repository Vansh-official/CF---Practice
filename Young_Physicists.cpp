#include<iostream>

using namespace std;

int main()
{
	int n;
	int sum_x = 0, sum_y = 0, sum_z = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		sum_x += a;
		sum_y += b;
		sum_z += c;
	}
	if (sum_x == 0 && sum_y == 0 && sum_z == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}