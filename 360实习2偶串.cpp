#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	string t;
	cin >> t;
	int cnt = 0;
	vector<int> hash(26, 0);
	int n = t.size();
	for (int i = 2; i <= n; i += 2) {
		for (int j = 0; j + i <= n; j++) {
			bool isEven = true;
			for (int k = 0; k < i; k++) {
				hash[t[j+k] - 'a']++;
printf("hash[%c] = %d\n", t[j+k], hash[t[j+k] - 'a']);
printf("i = %d, j = %d, k = %d, cnt = %d\n", i, j, k, cnt);
			}
			for (int x = 0; x < 26; x++) {
				if (hash[x] % 2 != 0) isEven = false;
				hash[x] = 0;
			}
			if (isEven) cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
