#include <iostream>
using namespace std;

int sample[101];

int gcd(int a, int b) {
	if (b == 0) return a;

	return gcd(b, a%b);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {

		int n;
		long long sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> sample[i];
		}

		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {

				sum += gcd(sample[i], sample[j]);

			}
		}

		cout << sum << "\n";

	}

	return 0;
}