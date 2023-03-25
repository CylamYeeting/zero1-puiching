#include<bits/stdc++.h>
using namespace std;
int main(){
	int v, n; cin>>v>>n;
	int A[n];
	int answer=0;
	for(int i=1;i<=n;i++) cin>>A[i];
	int nm[n+1][v+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=v;j++){
			nm[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=v;j++){
			if(j-A[i]>=0){
				nm[i][j] = max(nm[i-1][j], nm[i-1][j-A[i]]+A[i]);			
			}else{
				nm[i][j]=nm[i-1][j];
			}
		}
	}

	cout<<v-nm[n][v];	
}
