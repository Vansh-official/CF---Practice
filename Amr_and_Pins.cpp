#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double r, x1, y1, x2, y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;
	double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << ceil(d / (2 * r)) << endl;
}