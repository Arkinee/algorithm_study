#include <iostream>
#include <string>
using namespace std;

int stack_array[10000] = { 0 };

void push(int iterator) {

	int a;
	cin >> a;
	stack_array[iterator] = a;

}

int pop(int iterator) {

	if (iterator == 0) {
		cout << -1 << "\n";
	}
	else {
		cout << stack_array[iterator - 1] << "\n";
		stack_array[iterator - 1] = 0;
		iterator -= 1;
	}

	return iterator;
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, iterator=0;
	string order;

	cin >> T;
	while (T--) {

		cin >> order;

		if(order == "push") {
			push(iterator);
			iterator += 1;
		}
		else if (order == "pop") {
			iterator = pop(iterator);
		}
		else if (order == "size") {
			cout << iterator << "\n";
		}
		else if (order == "empty") {
			if (iterator == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (order == "top") {
			if (iterator == 0) cout << -1 << "\n";
			else cout << stack_array[iterator - 1] << "\n";
		}

	}

	return 0;
}