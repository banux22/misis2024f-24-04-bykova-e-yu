#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
 
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        std::set<int> unique_ranks(a.begin(), a.end());
        int v = 0;
        while (true){
            if (unique_ranks.find(v + 1) == unique_ranks.end()) {
                if (x > 0) {
                    --x;
                } else {
                    break;
                }
            }
            ++v;
        }
        std::cout << v << std::endl;
    }
    return 0;
}
