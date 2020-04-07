#include <iostream>
using namespace std;
const int MAX = 1000000;
bool check[MAX + 1];
int prime[MAX];
int index = 0;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 2; i*i <= MAX; i++) {
		if (check[i] == false) {
			prime[index] = i;
			index += 1;
			for (int j = i * 2; j <= MAX; j += i) {
				check[j] = true;
			}
		}
	}

	int n;
	while(1) {
		cin >> n;
		if (n == 0) break;
		if (n < 6) break;
		bool right = false;

		//가장 차이 큰 것 부터 둘 다 소수인지 확인
		for (int i = 1; i < index; i++) {
			if (check[n - prime[i]] == false) {
				cout << n << " = " << prime[i] << " + " << n - prime[i] << "\n";
				right = true;
				break;
			}
		}

		if (right == false) {
			cout << "Goldbach's conjecture is wrong.\n";
		}

	}
	return 0;
}