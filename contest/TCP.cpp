#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("TCP.inp", "r", stdin);
  freopen("TCP.out", "w", stdout);
  int n;
  cin >> n;
  long long a, ans = 0;
  for(int i = 0; i < n; i++){
    cin >> a;
    if(sqrt(a) == int(sqrt(a)))
      ans += a;
  }
  cout << ans;
}
