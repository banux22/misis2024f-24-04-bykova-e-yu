#include <iostream>
int main(){
  int t;
  std::cin>>t;
  int n;
  while(t--){
    std::cin>>n;
    if(n%2 != 0){
      n--;
      std::cout << (n/2) << std::endl;
      continue;
    }
    std::cout << (n/2) <<std::endl;
  }
  return 0;
}
