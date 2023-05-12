#include<iostream>
using namespace std;
int main(){
	int i; cin>>i;
	if(i>=6 && i<=11){
		cout<<"590";
	}else if(i>=12 && i<=17){
		cout<<"790";
	}else if(i>=18 && i<=59){
		cout<<"890";
	}else if (i>=60){
		cout<<"399";
	}else{
		cout<<"0";
	}
}
