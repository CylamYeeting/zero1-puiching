#include<bits/stdc++.h>
using namespace std;
int main(){
	//basic cin
	int n, m; cin>>n>>m;
	int v[m];
	int w[m];
	for(int i=1;i<=m;i++) cin>>v[i]>>w[i];
	
	// turn everything to zero
	int dpm[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			dpm[i][j]=0;
		}
	}
	
	//main code
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j-v[i]>=0){
				dpm[i][j] = max(dpm[i-1][j], dpm[i-1][j-v[i]]+v[i]*w[i]);//me take		
			}else{
				dpm[i][j]=dpm[i-1][j]; // me no take
			}
		}
	}

	cout<<dpm[m][n];	 //cout answer;
}
