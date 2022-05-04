#include <bits/stdc++.h>

using namespace std;

int a[1000007];

int main(){
  freopen("COUNTPAIR.inp", "r", stdin);
  freopen("COUNTPAIR.out", "w", stdout);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n);
  int i = 0, j, ans = 0, tmp;
  while(i < n){
    for(j = i + 1; j < n; j++){
      if(a[i] != a[j]){
        break;
      }
    }
    tmp = i;
    ans += j - i - 1;
    i += j - tmp;
  }
  ans++;
  cout << ans * (ans-1) / 2;
}