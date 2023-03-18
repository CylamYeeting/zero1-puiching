#include<bits/stdc++.h>
using namespace std;
int main(){
	//basic cin
	int v, n; cin>>v, n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	
	// turn everything to zero
	int dpm[v+1];	
	//main code
	for(int i=1;i<=n;i++){
		for(int j=v;j>=a[i];j--){
			dpm[j] = max(dpm[j], dpm[j-a[i]]+a[i]);//me take if no take just stand still cuz is going backward, not going to effect if u not going to take the item		
	}
}

	cout<<v-dpm[v]<<endl;	 //cout answer;
}
