#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("PSNGUYEN.inp", "r", stdin);
  freopen("PSNGUYEN.out", "w", stdout);
  long long m, n;
  cin >> m;
  cin >> n;
  long long p, q, ans = 0;
  if(n > m){
    cout << 0;
    return 0;
  }
  for(long long i = 1; i < m; i++){
    for(long long j = 1; j < n; j++){
      if((m+i) % (n+j) == 0){
        ans++;
      }
      if(n+j > (m+i)){
        break;
      }
    }
  }
  cout << ans;
}