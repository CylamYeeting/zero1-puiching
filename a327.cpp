#include <bits/stdc++.h>
using namespace std;
int main() {
	int num; cin>>num;
	for(int i=1;i<=num*2+1;i++){
		for(int j=1;j<=num*2+1;j++){
			if(i==1||i==num*2+1||j==1||j==num*2+1){
				cout<<"x"; //you are meant to add space to all cout code, but it turns out you dont.
			}else if(i%2==1||j%2==1){
				cout<<" ";
			}else{
				cout<<"O";
			}
		}
		cout<<endl;
	}
}
