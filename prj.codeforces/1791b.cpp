#include <iostream>
#include <string>
int main(){
  int t;
  std::cin >> t;
  while(t--){
    bool flag = false;
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int i = 0, j = 0;
    for(auto c: s){
      if(c == 'U'){
        j++;
      }
      else if(c == 'D'){
        j--;
      }
      else if(c == 'L'){
        i--;
      }
      else{
        i++;
      }
      if(i == 1 && j == 1){
        flag = true;
      }
    }
    if(flag) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
  }
  return 0;
}
