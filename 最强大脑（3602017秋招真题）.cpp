#include <iostream>
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
		size_t b_first_pos = a.find(b);
		size_t b_last_pos = a.find_last_of(b);
		size_t c_first_pos = a.find(c);
		size_t c_last_pos = a.find_last_of(c);
		if (b_first_pos != string::npos && c_first_pos != string::npos) {
			if (b_first_pos + b.size() <= c_last_pos) front = 1;
			if (c_first_pos + c.size() <= b_last_pos) back = 1;
		}
		cout << msg[front + 2 * back] << endl;
	}
	return 0;
}