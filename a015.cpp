#include <bits/stdc++.h>
using namespace std;
int main() {
	int time; cin>>time;
	if(time-15<0){
		cout<<24-(15-time);
	}else{
		cout<<time-15;
	}
}
