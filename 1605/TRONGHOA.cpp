#include <bits/stdc++.h>

using namespace std;

int a[10000007];

int main(){
  freopen("TRONGHOA.inp", "r", stdin);
  freopen("TRONGHOA.out", "w", stdout);
  memset(a, 0, sizeof(a));
  int n, k, ma = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> k;
    a[k]++;
    ma = max(ma, k);
  }
  int ans = 0;
  for(int i = 0; i < ma; i++){
    if(a[i] == 0){
      ans++;
    }
  }
  cout << ans;
}
