#include <iostream>
 
int main(){
    long long int a=1, d, n, m, s=0;
    std::cin >> n >> m;
    for(int i=1;i<=m;i++){
        std::cin>>d;
        if(a<d){
            s=s+abs(d-a);
            a=d;
        }
        if(a>d){
            s=s+((n+d)-a);
            a=d;
        }
    }
    std::cout << s;
}
