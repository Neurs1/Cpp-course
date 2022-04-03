#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("SINHNHAT.inp", "r", stdin);
  freopen("SINHNHAT.out", "w", stdout);
  int n, p, ans = 1;
  cin >> n;
  int a[n];

  for(int i = 0; i < n ; i++) cin >> a[i];

  sort(a, a+n); a[n] = -1; p = a[0];

  for(int i = 1; i <= n; i++){

    if(p == a[i]) ans += 1;
    
    else {
      cout << p << " " << ans << "\n";
      ans = 1;
      p = a[i];
    }
  }
}