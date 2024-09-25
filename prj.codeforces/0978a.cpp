#include <iostream>
#include <vector>
bool flag[1001];
int main(){
    int n;
    std::vector<int> ans;
    std::cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--){
        if(flag[a[i]] == false){
            ans.push_back(a[i]);
            flag[a[i]] = true;
        }
    }
    std::cout << ans.size() << std::endl;
    for(int i = ans.size() - 1; i >= 0; i--){
        std::cout << ans[i] << ' ';
    }
}
