#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int cnt = 1;
		vector<int> A(n);
		for (int i = 0; i < n; i++)
			cin >> A[i];
		int sc1 = 0, sc2 = 0;
		int left = 0, right = n - 1;
		while (left <= right) {
			if (A[left] > A[right]) { sc1 += A[left]; left++; }
			else { sc1 += A[right]; right--; }
			if (A[left] > A[right]) { sc2 += A[left]; left++; }
			else { sc2 += A[right]; right--; }
		}
		printf("Case #%d:%d %d\n", cnt++, sc1, sc2);
	}
	return 0;
}