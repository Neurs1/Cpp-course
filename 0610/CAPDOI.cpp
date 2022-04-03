#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("CAPDOI.inp", "r", stdin);
  freopen("CAPDOI.out", "w", stdout);
  long long n, z, ans = 0;
  cin >> n;
  vector<long long> a;
  for(long long i = 0; i < n; i++){
    cin >> z;
    a.push_back(z);
  }
  for(long long i = 0; i < n; i++){
    for(long long j = i+1; j < n; j++){
      if(a[i] == a[j]){
        ans += 1;
      }
    }
  }
  cout << ans;
}