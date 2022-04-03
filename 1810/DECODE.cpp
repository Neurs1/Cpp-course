#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("DECODE.inp", "r", stdin);
  freopen("DECODE.out", "w", stdout);
  string a, ans="";
  getline(cin, a);
  for(int i = a.size()-1; i >= 0; i--){
    ans.insert(int(ans.size()/2), string(1, a[i]));
  }
  cout << ans;
}