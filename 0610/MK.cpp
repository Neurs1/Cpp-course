#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("MK.inp", "r", stdin);
  freopen("MK.out", "w", stdout);
  string a;
  cin >> a;
  long long ans = 0;
  for(long long i = 0; i < a.size(); i++){
    ans += int(a[i]) - 48;
  }
  cout << ans;
}