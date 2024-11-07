#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int k;
	std::cin >> k;
	int best = k;
	for (int i = 0; i < n; ++i) {
		int ai;
		std::cin >> ai;
		if (k % ai == 0 && k / ai < best) {
			best = k / ai;
		}
	}
	std::cout << best << std::endl;
}
