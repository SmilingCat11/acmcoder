#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
	cin >> n;
	int e = 0;
	vector<int> x(n), p(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> p[i];
		e += x[i] * p[i];
	}
	double res = e / 100.0;
	printf("%.3f\n", res);
	return 0;
}
