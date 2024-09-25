#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int y = n + 1;
    for (y; y<10000; y += 1){
        int a=y%10;
        int b=(y%100)/10;
        int c=(y/100)%10;
        int d=y/1000;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            std::cout << y;
            break;
        }
    }
}   
