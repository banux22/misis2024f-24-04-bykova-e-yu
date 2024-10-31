#include <iostream>
#include <vector>
int main(){
    int n;
    std::cin >> n;
    std::vector <int> ans;
    for(int i=0; i < n; i++){
        int a;
        std::cin >> a;
        ans[a] = i; 
    }
	for(int i = ans.size() - 1; i >= 0; i--){
        std::cout << ans[i] << ' ';
    } 
}
