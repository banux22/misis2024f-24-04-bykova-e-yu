#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int ans[n];
    for (int i = 0; i < n; ++i) {
        ans[a[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << ans[i] << ' ';
    }
}
