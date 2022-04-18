#include <bits/stdc++.h>
#define to_num(x) int(x) - 48

using namespace std;

int main(){
  (void) freopen("SUM.inp", "r", stdin);
  (void) freopen("SUM.out", "w", stdout);
  
  string s;
  int ans = 0;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    ans += to_num(s[i]);
  }
  cout << ans;
}