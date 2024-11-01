#include <iostream>
int main(){
    long long n;
    long long m;
    long long a;
    std::cin >> n >> m >> a;
    if(n%a == 0 & m%a == 0){
        std::cout << (n*m)/(a*a);
    }
    else if(n%a == 0 & m%a != 0){
        long long s1 = m/a + 1;
        std::cout << (n/a) * s1;
    }
    else if(n%a != 0 & m%a == 0){
        long long s2 = n/a + 1;
        std::cout << (m/a) * s2;
    }else{
        long long s1 = m/a + 1;
        long long s2 = n/a + 1;
        std::cout << s1 * s2;
    }
}
