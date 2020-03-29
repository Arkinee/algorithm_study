#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;

	cin >> T;
	cin.ignore(); //t를 입력받고 다음 줄로 넘어가기 전에 멈춰있어 처음 temp를 받을때 빈 문자열을 받게 되므로 ignore로 해결

	while (T--) {

		string temp;
		getline(cin, temp);
		temp += "\n";
		stack<char> reverse;

		for (char c : temp) {

			if (c == ' ' || c == '\n') {	//temp의 문자가 빈칸이거나 개행문자이면
				while (!reverse.empty()) {
					cout << reverse.top();
					reverse.pop();
				}
				cout << c;
			}
			else {
				reverse.push(c);
			}

		}

	}

	return 0;
}