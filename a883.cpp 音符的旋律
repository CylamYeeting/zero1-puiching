#include<iostream>
using namespace std;
int main(){
  long long n; cin>>n;
  int note[n];
  int count=0;
  bool up= false, down = false, same = false;
  for(int i=0;i<n;i++){
    cin>>note[i];
  }
  for(int i=0;i<n-1;i++){
    if(note[i]<note[i+1]){
      up=true;
    }else if(note[i]>note[i+1]){
        down=true;
      }else{
        same=true;
      }
    }
  if(up==true&&down==false){
    cout<<"ascending";
  }else if(up==false&&down==true){
    cout<<"descending";
  }else if(up==false&&down==false&&same==true){
    cout<<"same";
  }else if(n==1){
    cout<<"same";
  }else{
  	cout<<"mixed";
  }
}
