#include <iostream>
#include <vector>
#include <string>

bool is_k_balanced(const std::string& s, int n, int k){
    std::vector<int> count(2, 0);
    for (int i = 0; i < k; ++i) {
        if (s[i] != '?') {
            count[s[i] - '0']++;
        }
    }
    if (count[0] > k / 2 || count[1] > k / 2) return false; 
    for (int i = k; i < n; ++i){
        int idx_start = i - k;
        if (s[idx_start] != '?'){
            count[s[idx_start] - '0']--;
        }
        if (s[i] != '?'){
            count[s[i] - '0']++;
        }
        if (count[0] > k / 2 || count[1] > k / 2) return false;
    }
    return true;
}

int main(){
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::string s;
        std::cin >> n >> k >> s;
        bool possible = true;
        for (int i = 0; i < k; ++i) {
            char expected = '?';
            for (int j = i; j < n; j += k) {
                if (s[j] != '?') {
                    if (expected == '?') {
                        expected = s[j];
                    } else if (expected != s[j]){
                        possible = false;
                    }
                }
            }
            for (int j = i; j < n; j += k){
                if (s[j] == '?') {
                    s[j] = (expected == '?' ? '?' : expected);
                }
            }
        }
        if (!possible){
            std::cout << "NO" << std::endl;
            continue;
        }
        if (is_k_balanced(s, n, k)){
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
