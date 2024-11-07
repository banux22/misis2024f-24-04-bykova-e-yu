#include <iostream>
#include <vector>
int main() {
	int t;
	std::cin >> t;
	for (int c = 0; c < t; c++) {
		int n;
		int height = 1;
		std::vector <int> days;
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			int a;
			std::cin >> a;
			days.push_back(a);
		}
		if (days[0] == 1) {
			height += 1;
		}
		for (int i = 1; i < n; i++) {
			if (days[i] == days[i - 1]) {
				if (days[i] == 1) {
					height += 5;
				}else {
					height = -1;
					break;
				}
			}
			else {
				if (days[i] == 1) {
					height += 1;
				}
			}
		}
		std::cout << height << std::endl;
	}
}
