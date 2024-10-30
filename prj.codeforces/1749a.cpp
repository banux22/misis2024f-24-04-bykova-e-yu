#include <iostream>
int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin >> n;
        int m;
        std::cin >> m;
        int rooks[m][2];
        for(int i = 0; i < m; i++){
            std::cin >> rooks[i][0] >> rooks[i][1];
        }
        if(m < n){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
    }
  }
}
