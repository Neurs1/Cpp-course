#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("CAPSO.inp", "r", stdin);
  freopen("CAPSO.out", "w", stdout);
  long long n, p;
  cin >> n;
  long long a[n];
  vector<long long> k;
  for(long long i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n, greater<long long>());
  a[n] = -1;
  p = a[0];
  for(long long i = 1; i <= n; i++){

    if(p != a[i]){
      k.push_back(p);
      p = a[i];
    }
  }
  cout << k[0] * k[1];
}