#include <iostream>
#include <string>
 
int main(){
    int n;
    std::cin >> n;
    std::string s;
    int x = 0;
    for (int i=0; i < n; i++){
        std::cin >> s;
        if(s.find("--") != std::string::npos)
            x--;
        else if(s.find("++") != std::string::npos)
            x++;
    }
    std::cout << x << std::endl;
    return 0;
}
