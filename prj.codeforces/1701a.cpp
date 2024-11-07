#include <iostream>
int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int cnt = 0;
		for (int n = 0; n < 4; ++n) {
			int i;
			std::cin >> i;
			if (i == 1) {
				cnt += 1;
			}
		}
		if (cnt == 0) {
			std::cout << 0 << std::endl;
		}
		else if (cnt == 4) {
			std::cout << 2 << std::endl;
		}
		else {
			std::cout << 1 << std::endl;
		}
	}
}
