#include <iostream>
#include <string>
int main(){
	int t;
	std::cin >> t;
	std::string nfile;
	std::cin >> nfile;
	int answer = 0;
	int c = 0;
	for (int i=0; i<t; i++){
		if (nfile[i] == 'x'){
			if (c<2){
				c += 1;
		    }else{
			    answer += 1;
		    }
		}else{
		    c = 0;
		}
	}
	std::cout << answer;
}
