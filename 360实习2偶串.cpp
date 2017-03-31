#include <iostream>
#include <string>
#include <vector> 
#include <unordered_map>
using namespace std;

int main()
{
	string t;
	cin >> t;
	int n = t.size();
	int cur = 0;
	long long res = 0;
	unordered_map<int, int> mp;
	mp[0] = 1;
	for (int i = 0; i < n; i++) {
		cur ^= 1 << (t[i] - 'a');
		res += mp[cur];
		mp[cur]++;
	}
	cout << res << endl;
	return 0;
}
