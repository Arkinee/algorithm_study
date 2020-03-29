#include <iostream>
#include <string>
#include <stack>
using namespace std;

void print(stack<char> &a) {

	while (!a.empty()) {
		cout << a.top();
		a.pop();
	}

}

int main() {

	string temp;
	stack<char> ans;

	getline(cin, temp);
	bool tag = false;

	for (char c : temp) {

		if (c == '<') {

			tag = true;
			print(ans);
			cout << c;

		}
		else if (c == '>') {
			tag = false;
			cout << c;
		}
		else if (c == ' ') {
			print(ans);
			cout << c;
		}
		else {
			if (tag == true) {
				cout << c;
			}
			else {
				ans.push(c);
			}
		}

	}
	
	print(ans);
	

	return 0;
}