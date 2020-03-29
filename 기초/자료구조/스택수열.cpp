#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int last = 0;
	string answer = "";
	stack<int> sequence;

	cin >> n;

	while (n--) {

		int input;
		cin >> input;

		if (input > last) {
			while (input > last) {
				sequence.push(++last);
				answer += '+';
			}

			sequence.pop();
			answer += '-';

		}
		else {
			bool found = false;
			while (!sequence.empty()) {
				int top = sequence.top();
				sequence.pop();
				answer += '-';

				if (input == top) {
					found = true;
					break;
				}
			}

			if (!found) {
				cout << "NO\n";
				return 0;
			}

		}

	}

	for (char c : answer) {
		cout << c << "\n";
	}


	return 0;
}