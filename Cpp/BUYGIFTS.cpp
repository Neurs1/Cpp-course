#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("BUYGIFTS.inp", "r", stdin);
  freopen("BUYGIFTS.out", "w", stdout);
  long long m,n,z;
  cin >> n >> m;
  vector<long long> a;
  for(long long i = 0; i < n; i++){
    cin >> z;
    a.push_back(z);
  }
  sort(a.begin(), a.end());
  long long ans = a[m-1] - a[0];
  for(long long i = m; i < n; i++){
    ans = min(ans, a[i]-a[i-m]);
  }
  cout << ans;
}