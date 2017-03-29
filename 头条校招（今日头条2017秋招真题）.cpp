#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 0) cout << -1 << endl;
	else if (n == 0) cout << 3 << endl;
  	else if (n == 1) cout << 2 << endl;
	else {
	vector<int> nums(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	int group = 1; // 总共可分为group组
	int isThree = 1;
	sort(nums.begin(), nums.end());
	for (int i = 1; i < n; i++) {
		if (nums[i] - nums[i-1] > 10 || isThree == 3) {
			group++;
			isThree = 1;
		}
		else isThree++;
	}
	int res = 3 * group - n;
	cout << res << endl;
	}
	return 0;
}