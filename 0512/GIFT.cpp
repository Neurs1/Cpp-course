#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("GIFT.inp", "r", stdin);
  freopen("GIFT.out", "w", stdout);
  long long n, m, z, ans = 0;
  cin >> n >> m;
  vector<long long> a;
  for(long long i = 0; i < m; i++){
    cin >> z;
    a.push_back(z);
  }
  sort(a.begin(), a.end());
  long long i = 0;
  while(n - a[i] > 0){
    n -= a[i];
    i++;
    ans += 1;
  }
  cout << ans;
}