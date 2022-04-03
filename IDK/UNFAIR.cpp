#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("UNFAIR.inp", "r", stdin);
  freopen("UNFAIR.out", "w", stdout);
  long long n, z, ans = 0;
  cin >> n;
  vector<long long> a, b;
  for(long long i = 0; i < n; i++){
    cin >> z;
    a.push_back(z);
  }
  for(long long i = 0; i < n; i++){
    cin >> z;
    b.push_back(z);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for(long long i = 0; i < n; i++){
    if(a[i] <= b[i]){
      ans += 1;
    }
  }
  cout << ans;
}