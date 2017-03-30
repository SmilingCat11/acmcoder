#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	vector<int> A(n), B(n);
	multimap<int, int> hash;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n; i++) {
		cin >> B[i];
		hash.insert(pair<int,int>(A[i], B[i]));
	}
	while (q--) {
		int x, y;
		int cnt = 0;
		cin >> x >> y;
		std::multimap<int,int>::iterator it = hash.begin();
		int lo = 0, hi = n - 1;
		while (lo < hi) {
			itmid = 
			if (it->second >= y) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
