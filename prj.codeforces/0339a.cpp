#include <iostream>
#include <vector>
#include <bits/stdc++.h>
int main(){
    std::string s;
    std::cin >> s;
    std::vector <int> v;
    for(size_t i = 0; i < s.size(); i += 2){
        v.push_back(std::stoi(s.substr(i, 1)));
    }
    sort(v.begin(), v.end());
    for(auto i = v.begin(); i != v.end(); ++i){
        if (i != v.end() - 1){
            std::cout << *i << "+";
        }else{
            std::cout << *i;
        }
    }
    std::cout << std::endl;
    return 0;
}
