#include <iostream>
 
int main() {
    int n, k;
    long udov;
    long maxudov = -10000000000;
    std::cin >> n >> k;
    for (int i=0; i < n; i+=1){
        int fi, ti;
        std::cin >> fi >> ti;
        if (ti > k){
            udov = fi - (ti - k);
        }else{
            udov = fi;
        }
        if (udov > maxudov){
            maxudov = udov;
        }else {
            
        }
    }
    std::cout << maxudov;
}
