#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("CATDAY.inp", "r", stdin);
  freopen("CATDAY.out", "w", stdout);
  long long m, k, ans = 0;
  cin >> m >> k;
  while((ans * k) + ans != m){
    ans += k;
    if((ans * k) + ans > m){
      cout << -1;
      return 0;
    }
  }
  cout << ans << " " << ans*k;
}