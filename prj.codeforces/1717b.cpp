#include <bits/stdc++.h>
#define int long long
 
int T, N, K, R, C;
int G[500][500];
 
int32_t main(){
	std::cin.tie(0) -> sync_with_stdio(0);
	std::cin >> T;
	while(T--){
		std::cin >> N >> K >> R >> C;
		R--, C--;
		R %= K, C %= K;
		for(int i = 0; i < K; i++){
			std::fill(G[i], G[i]+K, 0);
		}
		while(G[R][C] == 0){
			G[R++][C++] = 1;
			if(R == K){ 
			    R = 0;
			}
			if(C == K){ 
			    C = 0;
			}
		}
		for(int i = 0; i < N / K; i++){
			for(int j = 0; j < K; j++){
				for(int k = 0; k < N / K; k++){
					for(int l = 0; l < K; l++){
						std::cout << (G[j][l] ? 'X' : '.');
					}
				}
				std::cout << "\n";
			}
		}
	}
}
