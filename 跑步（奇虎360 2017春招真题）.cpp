#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int L, R;
	cin >> L >> R;
	double x = R*cos(1.0 * L / R);
	double y = R*sin(1.0 * L / R);
	cout.precision(3);
	cout.setf(ios::fixed);
	cout << x << " " << -y << endl;
	cout << x << " " << y << endl;
	return 0;
}