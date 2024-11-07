#include <iostream>
#include <string>
int main(){
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++){
        std::string s;
        std::cin >> s;
        std::string answer;
        if (s.size() > 1){
            
            if (s[0] == s[1] && s[s.size()-1] == s[s.size()-2]){
                for (int c = 1; c < s.size(); c++){
                    if (s[c-1] == s[c] || s[c] == s[c+1]){
                        answer = "YES";
                    }else{
                        answer = "NO";
                        break;
                    }
                }
            }else{
                answer = "NO";
            }
            
        }else{
            answer = "NO";
        }
        std::cout << answer << std::endl;
    }
}
