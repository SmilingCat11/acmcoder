#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> T(N);
	vector<int> Q(M);
	vector<int> tmp;
	vector<int> res;
	cin >> T[0];
	for (int i = 1; i < N; i++) {
		cin >> T[i];
		if (T[i] - T[i-1] > 1) tmp.push_back(T[i-1] + 1);
	}
	tmp.push_back(T[N-1] + 1);
	for (int i = 0; i < M; i++) {
		cin >> Q[i];

		int left = 0, right = N - 1;
		int mid;
		bool QinT = false;
		while (left <= right) {
//cout << left << " " << right <<endl;
			mid = left + (right - left) / 2;
			if (Q[i] == T[mid]) { QinT = true; break; }
			else if (Q[i] > T[mid]) left = mid + 1;
			else right = mid - 1;
		}
		
		if (QinT) {
			for (int j = 0; j < tmp.size(); j++) {
//				if (Q[i] <= tmp[j]) { res.push_back(tmp[j]); break; }
//				if (j == tmp.size() - 1) res.push_back(Q[i]);

				if (Q[i] <= tmp[j]) { cout << tmp[j] << endl; break; }
				if (j == tmp.size() - 1) cout << Q[i] << endl;
			}
		}
//		else res.push_back(Q[i]);
		else cout << Q[i] << endl;
	}
	
//	for (int i = 0; i < M; i++)
//		cout << res[i] << endl;
	return 0;
}
