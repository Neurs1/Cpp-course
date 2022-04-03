#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("TNH.inp", "r", stdin);
  freopen("TNH.out", "w", stdout);
  
  int n, k;
  cin >> n >> k;

  long long tmp, ans = 0;
  
  while(n--){
    cin >> tmp; ans += tmp;
  }
  ans = ans%k == 0 ? ans/k : ans/k + 1;

  cout << ans;
}