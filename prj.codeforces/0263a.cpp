#include <iostream>
#include <cmath>
int main(){
    int x;
    for (int i = 0; i < 5; i += 1){
        for (int j = 0; j < 5; j += 1){
            std::cin >> x;
            if (x == 1){
                std::cout << std::abs(2 - i) + std::abs(2 - j);
            }
        }
    }
}
