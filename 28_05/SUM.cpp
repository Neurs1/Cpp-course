#include <bits/stdc++.h>
#define to_num(c) int(c) - 48

using namespace std;

int main(){
  freopen("SUM.inp", "r", stdin);
  freopen("SUM.out", "w", stdout);
  
  string s;
  cin >> s;
  
  int ans = 0;
  
  for(int i = 0; i < s.size(); i++)
    ans += to_num(s[i]);
  
  cout << ans;
}