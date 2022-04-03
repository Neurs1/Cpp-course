#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("DEMBI.inp", "r", stdin);
  freopen("DEMBI.out", "w", stdout);
  long long n;
  cin >> n;
  for(long long x = 1; x <= n; x++){
    for(long long y = 1; y <= x; y++){
      if (x*2 == y*3 && x + y == n){
        cout << x << " " << y;
        return 0;
      }
    }
  }
  cout << -1;
}