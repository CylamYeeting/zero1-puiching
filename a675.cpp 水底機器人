#include<bits/stdc++.h>
using namespace std;
int main(){
	//basic cin
	int L,P,N; cin>>L>>P>>N;
	vector<int> b(N+1, 0);
	vector<int> c(N+1, 0);
	for(int i=1;i<=N;i++){
		cin>>b[i]>>c[i];
		b[i] = L - b[i];
	}
	
	// turn everything to zero
	P-=L;
	vector<int> dp(P+1, 0);
	//main code
	for(int i=1;i<=N;i++){
		for(int j=P;j>=b[i];j--){
			dp[j] = max(dp[j], dp[j-b[i]]+c[i]); //me take		
	}
}
	cout<<dp[P];	 //cout answer;
}
