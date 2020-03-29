#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	cin.ignore();

	while (T--) {

		string temp;
		cin >> temp;
		temp += "\n";
		stack<char>bracket;

		for (char b : temp) {

			if (b == '(') {
				bracket.push(b);
			}
			else if (b == ')') {
				if (bracket.empty()) {
					cout << "NO\n";
					break;
				}

				bracket.pop();
			}
			else if (b == '\n') {

				if (bracket.empty()) {
					cout << "YES\n";
					break;
				}

				cout << "NO\n";

			}

		}

	}


	return 0;
}