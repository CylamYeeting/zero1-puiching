#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n1, n2,n4;
	char useless;
	cin>>n1>>n2>>useless>>n4;
	for(int i=0;i<=9;i++){
		if((n1*1000+n2*100+i*10+n4)%67==0){
			cout<<n1*1000+n2*100+i*10+n4;
		}
	}
}
