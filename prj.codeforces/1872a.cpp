#include <iostream>
#include <cmath>
 
int main(){
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++){
        double a, b, c;
        std::cin >> a >> b >> c;
        double k;
        k = ceil((std::abs(a-b))/(2*c));
        std::cout << k << std::endl;
    }
}
