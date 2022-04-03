#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("ABKSUM.inp", "r", stdin);
  freopen("ABKSUM.out", "w", stdout);
  int t;
  long long a, b, k, ans;
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> a >> b >> k;
    ans = 0;
    for(long long j = a; j <= b; j++){
      ans += j;
    }
    ans = ans * k;
    if(ans%2==0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
  }
}