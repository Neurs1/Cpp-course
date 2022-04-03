#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("TGLN.inp", "r", stdin);
  freopen("TGLN.out", "w", stdout);
  int n;
  cin >> n;
  double a[n], ans=0, p, s;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n-1);
  for(int i = 2; i < n; i++){
    if(a[i-2] + a[i-1] > a[i]){
      p = (a[i-2] + a[i-1] + a[i]) / 2;
      s = sqrt(p*(p-a[i-2])*(p-a[i-1])*(p-a[i]));
      ans = max(ans, s);
    }
  }
  if(ans == 0){
    cout << -1;
  }
  else{
    cout << setprecision(3) << fixed << ans;
  }
}