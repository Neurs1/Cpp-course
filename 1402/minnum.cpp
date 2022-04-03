#include <bits/stdc++.h>

using namespace std;

int a[100007];

int main(){
  freopen("minnum.inp", "r", stdin);
  freopen("minnum.out", "w", stdout);

  int n, k, ma = 0;
  cin >> n;
  memset(a, 0, sizeof(a));
  
  for(int i = 0; i < n; i++){
    cin >> k;
    ma = max(ma, k);
    a[k] = 1;
  }

  for(int i = 1; i <= ma + 1; i++){
    if(a[i] != 1){
      cout << i;
      return 0;
    }
  }
}