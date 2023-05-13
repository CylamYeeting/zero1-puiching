#include <bits/stdc++.h>
using namespace std;
struct Point{
  int t,c;
};
bool cmp(Point x, Point y){
  if(x.t != y.t) return x.t<y.t;
  return x.c < y.c;
}
int main() {
  int n; cin>>n;
  int sum=0,ans=0;
  vector<Point> a;
  for(int i=0;i<n;i++){
    int t1,t2; cin>>t1>>t2;
    a.push_back({t1,+1});
    a.push_back({t2,-1});
  }
  sort(a.begin(),a.end(),cmp);
  for(int i=0;i<a.size();i++){
    sum += a[i].c;
    ans = max(ans,sum);
  }
  cout<<ans;
}
//copy by rayson
