#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	int year; 
	for(int i=1;i<=n;i++){
	cin>>year;
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				cout<<"a leap year"<<endl;
			}else{
				cout<<"a normal year"<<endl;
			}
		}else{
			cout<<"a leap year"<<endl;	
		}
	}else{
		cout<<"a normal year"<<endl;
	}
}
}
