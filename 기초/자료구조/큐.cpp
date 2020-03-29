#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	int queue[10000];
	int begin = 0;
	int end = 0;

	while (T--) {

		string order;
		cin >> order;

		if (order == "push") {
			int a;
			cin >> a;
			queue[end] = a;
			end += 1;
		}
		else if (order == "pop") {
			
			if (end == begin) cout << -1 << "\n";
			else {
				cout << queue[begin] << "\n";
				queue[begin] = 0;
				begin += 1;
			}
		}
		else if (order == "front") {
			if (end == begin) cout << -1 << "\n";
			else {
				cout << queue[begin] << "\n";
			}
		}
		else if (order == "back") {
			if (end == begin) cout << -1 << "\n";
			else {
				cout << queue[end - 1] << "\n";
			}

		}
		else if (order == "size") {
			cout << end - begin << "\n";
		}
		else if (order == "empty") {
			if (begin == end) cout << 1 << "\n";
			else cout << 0 << "\n";
		}

	}

	return 0;
}