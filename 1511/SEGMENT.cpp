#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("SEGMENT.inp", "r", stdin);
  freopen("SEGMENT.out", "w", stdout);
  long long n, k, t, z, l, r, ans;
  cin >> n >> k >> t;
  vector <long long> a;
  for(long long i = 0; i < n; i++){
    cin >> z;
    a.push_back(z);
  }
  for(long long i = 0; i < t; i++){
    cin >> l >> r;
    l -= 1;
    r -= 1;
    ans = 0;
    for(long long j = l; j <= r; j++){
      if (a[j] % k == 0){
        ans += 1;
      }
    }
    cout << ans << "\n";
  }
}