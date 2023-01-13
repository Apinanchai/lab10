#include<iostream>
using namespace std;

void printO(int M ,int N){
	if(M <= 0 or N <= 0){
		cout << "Invalid input";
	
	}
	for(int i = 0; i < M;i++){
		for(int j=0 ; j <N; j++){
			cout << 'O';
		}
		cout << '\n';
	}
}

