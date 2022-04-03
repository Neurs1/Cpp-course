#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("MA_B9.inp", "r", stdin);
  freopen("MA_B9.out", "w", stdout);
  int t, x, y;
  long long ans = 0;
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> x >> y;
    for(int j = x; j <= y; j++){
      ans += j*j*j;
    }
    cout << ans << "\n";
    ans = 0;
  }
}