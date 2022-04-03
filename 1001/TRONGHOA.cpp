#include <bits/stdc++.h>

using namespace std;

int a[1000007];

int main(){
  freopen("TRONGHOA.inp", "r", stdin);
  freopen("TRONGHOA.out", "w", stdout);
  int n, ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n);
  for(int i = 0; i < n; i++){
    if(a[i+1] - a[i] > 1){
      ans += a[i+1] - a[i] - 1;
    }
  }
  cout << ans;
}