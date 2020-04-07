#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C;
	cin >> A >> B >> C;

	if (A >= 2 && B >= 2 && C >= 2 && A <= 10000 && B <= 10000 && C <= 10000) {
		cout << (A + B) % C << "\n";
		cout << ((A % C) + (B % C)) % C << "\n";
		cout << (A * B) % C << "\n";
		cout << ((A % C) * (B % C)) % C << "\n";
	}

	return 0;
}