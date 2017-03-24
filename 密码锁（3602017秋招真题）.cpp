#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int maxn = 3;

int main()
{
	vector<string> t(maxn);

	while (cin >> t[0] >> t[1] >> t[2]) {
		bool res = true;
		for (int i = 0; i < maxn; i++) {
			for (int j = 0; j < maxn; j++) {
				if (t[i][j] != t[maxn - 1 - i][maxn - 1 - j]) {
					res = false;
					break;
				}
			}
		}
		if (res) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}