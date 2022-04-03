#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("HOUGH.inp", "r", stdin);
  freopen("HOUGH.out", "w", stdout);
  long long n, m, x, ans = 0;
  cin >> n >> m;
  long long a[n-1];
  for(long long i = 0; i < n; i++){
    cin >> a[i];
  }
  for(long long i = 0; i < m; i++){
    cin >> x;
    for(long long j = 0; j < n; j++){
      if(x > a[j]){
        ans += 1;
      }
    }
    if(ans != 0) cout << ans << "\n";
    ans = 0;
  }
}