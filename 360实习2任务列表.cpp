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
		for (int j = 0; j < tmp.size(); j++) {
			if (Q[i] <= tmp[j]) { cout << tmp[j] << endl; break; }
			if (j == tmp.size() - 1) cout << Q[i] << endl;
		}
	}
	
	return 0;
}
