#include <iostream>
using namespace std;

const int MAX = 1000000;
bool check[MAX + 1];

void prime(int a, int b) {

	for (int i = 2; i*i <= a; i++) {
		if (check[i] == false) {
			for (int j = i * 2; j <= a; j+=i) {
				check[j] = true;
			}
		}
	}

	for (int i = b; i <= a; i++) {
		if(!check[i])
		cout << i << "\n";
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	check[0] = check[1] = true;

	int m, n;
	cin >> m >> n;

	prime(n, m);

	return 0;
}