#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: "; cin >> n;
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += i;
	}
	cout << "Tong: " << tong;
	return 0;
}