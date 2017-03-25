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
	for (int j = 0; j < n; j++) {
		for (int i = j; i < n; i++) {
			hash[t[i] - 'a']++;
			if ((i - j) % 2) {
				bool isEven = true;
				for (int k = 0; k < 26; k++) {
					if (hash[k] % 2 != 0) isEven = false;
				}
				if (isEven) cnt++;
			}
		}

		for (int k = 0; k < 26; k++) hash[k] = 0;
	}

	cout << cnt << endl;
	return 0;
}
