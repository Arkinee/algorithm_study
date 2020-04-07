#include <iostream>
using namespace std;

bool prime(int a) {

	if (a == 1) return false;

	for (int i = 2; i * i <= a; i++) {

		if (a % i == 0) return false;

	}

	return true;

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	int cnt = 0;
	
	while (n--) {
		int a;
		cin >> a;
		if (prime(a)) cnt += 1;
	}

	cout << cnt << "\n";


	return 0;
}