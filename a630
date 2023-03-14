#include<bits/stdc++.h>
using namespace std;
int main(){
	//basic cin
	int T, M; cin>>T>>M;
	int v[M];
	int w[M];
	for(int i=1;i<=M;i++) cin>>v[i]>>w[i];
	
	// turn everything to zero
	int dpm[M+1][T+1];
	for(int i=0;i<=M;i++){
		for(int j=0;j<=T;j++){
			dpm[i][j]=0;
		}
	}
	
	//main code
	for(int i=1;i<=M;i++){
		for(int j=1;j<=T;j++){
			if(j-v[i]>=0){
				dpm[i][j] = max(dpm[i-1][j], dpm[i-1][j-v[i]]+w[i]);//me take		
			}else{
				dpm[i][j]=dpm[i-1][j]; // me no take
			}
		}
	}

	cout<<dpm[M][T];	 //cout answer;
}
