#include <bits/stdc++.h>
using namespace std;
int main() {
	int num; cin>>num;
	while(num>7){
		num-=7;
	}
	if(num==1){
		cout<<"紅";
	}else if(num==2){
		cout<<"橙";
	}else if(num==3){
		cout<<"黃";
	}else if(num==4){
		cout<<"綠";
	}else if(num==5){
		cout<<"藍";
	}else if(num==6){
		cout<<"靛";
	}else if(num==7){
		cout<<"紫";
	}
}
