#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	string t;
	cin >> t;
	int cnt = 0;
	int n = t.size();
	for (int j = 0; j < n; j++) {
		long long res = 0;
		for (int i = j; i < n; i++) {
			res ^= 1 << (t[i] - 'a');
			if (!res) cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
