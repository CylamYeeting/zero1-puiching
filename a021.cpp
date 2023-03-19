#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b; cin>>a>>b;
	int biggest;
	if(a>b){
		biggest=a;
	}else{
		biggest=b;
	}
	int c;cin>>c;
	if(biggest>c){
		cout<<biggest;
	}else{
		cout<<c;
	}
}
