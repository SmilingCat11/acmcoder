#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string a, b, c;

	vector<string> msg = {"invalid", "forward", "backward", "both"};
	while (cin >> a >> b >> c) {
		int front = 0;
		int back = 0;
		size_t b_pos_f = a.find(b);
		if (b_pos_f != string::npos) {
			size_t c_pos_f = a.find(c, b_pos_f + b.size());
			if (c_pos_f != string::npos) front = 1;
		}
		reverse(a.begin(), a.end());
		size_t b_pos_b = a.find(b);
		if (b_pos_b != string::npos) {
			size_t c_pos_b = a.find(c, b_pos_b + b.size());
			if (c_pos_b != string::npos) back = 1;
		}
		cout << msg[front + 2 * back] << endl;
	}
	return 0;
}