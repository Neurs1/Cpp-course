#include <bits/stdc++.h>

using namespace std;

int l[1000007], r[1000007];

int main(){
  freopen("GHEPGIAY.inp", "r", stdin);
  freopen("GHEPGIAY.out", "w", stdout);
  int m, n;
  cin >> m >> n;
  memset(l, 0, sizeof(l));
  memset(r, 0, sizeof(r));

  int tmp, ans = 0, ma = 0;
  
  while(m--){
    cin >> tmp;
    l[tmp]++;
    ma = max(ma, tmp);
  }
  while(n--){
    cin >> tmp;
    r[tmp]++;
    ma = max(ma, tmp);
  }
  for(int i = 0; i <= ma; i++){
    if(l[i] != 0 && r[i] != 0){
      ans += (l[i] + r[i]) / 2;
    }
  }
  cout << ans;
}