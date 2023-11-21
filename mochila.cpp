#include <iostream>
#include <vector>
#include <algorithm>

int mochila(int N, int M, vector<int> p, vector<int> b){

	if(N == 0 || M == 0){
		return 0;
	}else if(N < 0 || M < 0){
                return -2;
        }
	
	if(v[N][M] != -1){
		return v[N][M];
	}

	if(p[N-1] > M){
		v[N][M] = mochila(N-1,M,p,b);
	}else{
		v[N][M] = max(mochila(N-1,M,p,b),b[N-1] + mochila(N-1,M-p[N-1],p,b));
	}


	return v[N][M];

}

int main(){
	
	vector<int> p1 = {1,3,2,4};
	vector<int> b1 = {10,20,15,20};
	rellenar(n1,m1);

	cout << mochila(n1-1,m1-1,p1,b1) << endl;

}
