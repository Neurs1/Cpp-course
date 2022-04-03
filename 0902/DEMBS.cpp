#include <bits/stdc++.h>

using namespace std;

int a[1007];

int main(){
  freopen("DEMBS.inp", "r", stdin);
  freopen("DEMBS.out", "w", stdout);
  int n, ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n, greater<int>());
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(a[i] % a[j] == 0){
        ans++;
      }
    }
  }
  cout << ans;
}