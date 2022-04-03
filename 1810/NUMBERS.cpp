#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("NUMBERS.inp", "r", stdin);
  freopen("NUMBERS.out", "w", stdout);
  long long n, z, ans = 1000000000000000000, ans2 = 0;
  cin >> n;
  vector<long long> a;
  for(long long i = 0; i < n; i++){
    cin >> z;
    a.push_back(z);
  }
  for(long long i = 0; i < n; i++){
    ans2 = a[i];
    for(long long j = i+1; j < n; j++){
      ans2 += a[j];
      ans = min(ans, ans2);
    }
  }
  cout << ans;
}