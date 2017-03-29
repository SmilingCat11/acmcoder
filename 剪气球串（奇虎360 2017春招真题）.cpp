#include <iostream>
#include <vector>
using namespace std;
const int NUM = 1000000007;
int main()
{
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	vector<int> hash(10, 0);
	int res = 1;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		while (--cnt) res *= 2;
		res %= NUM;
		if (hash[A[i]] == 0) { hash[A[i]]++; cnt++; cout << cnt << endl; }
		else {
			for (int j = 0; j < 10; j++) hash[j] = 0;
		}
	}
	cout << res << endl;
	return 0;
}