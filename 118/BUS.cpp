#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, k, i, z, ans = 0;
  cin >> n >> k;
  vector<long long> a;
  for(long long i = 0; i < n; i++){
    cin >> z;
    a.push_back(z);
  }
  sort(a.begin(), a.end());
  for(long long i = 0; i < k; i++){
    ans += a[i];
  }
  cout << ans;
}