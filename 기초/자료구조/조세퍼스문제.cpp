#include <iostream>
#include <queue>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	queue<int>table;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		table.push(i);
	}

	int count = 1;
	cout << "<";
	while (!table.empty()) {

		if (count % m != 0) {
			table.push(table.front());
			table.pop();
			count += 1;
		}
		else {
			cout << table.front();
			table.pop();
			if (!table.empty()) {
				cout << ", ";
			}
			else {
				cout << ">";
			}

			count = 1;
		}

	}


	return 0;
}