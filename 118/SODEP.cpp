#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("SODEP.inp", "r", stdin);
  freopen("SODEP.out", "w", stdout);
  long long b, n, z, ans = 0;
  cin >> b >> n;
  vector<long long> a;
  for(long long i = 0; i < b; i++){
    cin >> z;
    a.push_back(z);
  }
  for(long long i = 2; i <= n; i++){
    for(long long j = 0; j < b; j++){
      if(i % a[j] == 0){
        ans += 1;
        break;
      }
    }
  }
  cout << ans;
}