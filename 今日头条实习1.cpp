#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	int l = 0, r = 0, peak = 0;
	int lm = -1, rm = -1;
	int best = -1;
	while (r+1 < n) {
		while (r+1 < n && A[r] > A[r+1]) { l++; r++; }
		while (r+1 < n && A[r] < A[r+1]) r++;
		peak = r;
		while (r+1 < n && A[r] > A[r+1]) r++;
		if (r-l > best && peak > l && peak < r) { 
			best = r-l; rm = r; lm = l; 
		}
		l = r;
		if (best > n - 1 - l) break;
	}
	cout << lm << " " << rm << endl;
	
	return 0;
}
