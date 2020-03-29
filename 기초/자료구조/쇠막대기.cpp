#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string temp;
	stack<int>pipe;
	int ans = 0;
	int index = 0;

	getline(cin, temp);

	for (char a : temp) {

		if (a == '(') {
			pipe.push(index);
		}
		else if (a == ')') {
			if (index - pipe.top() == 1) {
				pipe.pop();
				ans += pipe.size();
			}
			else {
				ans += 1;
				pipe.pop();
			}
		}

		index += 1;
	}

	cout << ans << "\n";


	return 0;
}