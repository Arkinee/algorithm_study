#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int order;
	string temp;
	stack<char>left;
	stack<char>right;

	cin >> temp;
	
	for (char a : temp) {
		left.push(a);
	}

	cin >> order;
	
	while (order--) {

		char e;
		cin >> e;

		if (e == 'L') {
			if (!left.empty()) { 
				right.push(left.top());
				left.pop(); 
			}
		}
		else if (e == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (e == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (e == 'P') {
			char a;
			cin >> a;
			left.push(a);
		}

	}

	stack<char>k;
	while (!left.empty()) {
		k.push(left.top());
		left.pop();
	}

	while (!k.empty()) {
		cout << k.top();
		k.pop();
	}

	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}


	return 0;
}