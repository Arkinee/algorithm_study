#include <iostream>
using namespace std;


int main() {

	//c++의 입력속도를 획기적으로 줄여줌
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;

	cin >> A >> B;

	cout << A + B << '\n';


	return 0;
}