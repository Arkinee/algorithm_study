#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, A, B;

	cin >> T;
	int index = 1;
	while (T--) {
		cin >> A >> B;
		cout << "Case #" << index << ": " << A + B << "\n";
		index++;
	}


	return 0;
}