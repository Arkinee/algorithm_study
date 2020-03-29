#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;

	cin >> T;
	cin.ignore(); //t�� �Է¹ް� ���� �ٷ� �Ѿ�� ���� �����־� ó�� temp�� ������ �� ���ڿ��� �ް� �ǹǷ� ignore�� �ذ�

	while (T--) {

		string temp;
		getline(cin, temp);
		temp += "\n";
		stack<char> reverse;

		for (char c : temp) {

			if (c == ' ' || c == '\n') {	//temp�� ���ڰ� ��ĭ�̰ų� ���๮���̸�
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