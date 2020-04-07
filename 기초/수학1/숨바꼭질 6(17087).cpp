#include <iostream>
using namespace std;

const int MAX = 100000;
long long sample[MAX];

int gcd(int a, int b) {
	if(b == 0) return a;

	return gcd(b, a % b);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, s;
	cin >> n >> s;
	int g = 1;

	for (int i = 0; i < n; i++) {

		cin >> sample[i];

		if (sample[i] > s) sample[i] = sample[i] -= s;
		else sample[i] = s - sample[i];

	}

	g = gcd(sample[0], sample[1]);

	for (int i = 2; i < n; i++) {
		g = gcd(g, sample[i]);
	}

	cout << g << "\n";

	return 0;
}