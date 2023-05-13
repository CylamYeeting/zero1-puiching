#include<bits/stdc++.h>
using namespace std;
int main(){
	int v,n;cin>>v>>n;
	vector<int> a(n+1, 0), b(n+1,0);
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	
	vector<int> dp(v+1, 0);
		for(int i=1;i<=n;i++){
			for(int j=v;j>=a[i];j--){
				dp[j]=max(dp[j], dp[j-a[i]]+b[i]);
			}
		}
	cout<<dp[v]<<endl;
}
