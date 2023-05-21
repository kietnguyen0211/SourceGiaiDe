#include <iostream>
using namespace std;
int main() {
	int n;
	float tong = 1;
	cout << "Nhap n: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		tong += (1 * 1.0 / (2 * i + 1));
	}
	cout << "Tong = " << tong << endl;
	return 0;
}