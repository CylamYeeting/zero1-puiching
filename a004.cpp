#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	int cost; 
	int ans=0;
	for(int i=1;i<=n;i++){
		cin>>cost;
		ans = ans + cost * i;
	}
	cout<<ans;
}
