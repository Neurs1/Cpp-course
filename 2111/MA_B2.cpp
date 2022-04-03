#include <bits/stdc++.h>

using namespace std;

int snt(long long x){
  if(x <= 1){
    return false;
  }
  if(x < 4){
    return true;
  }
  for(long long i = 2; i <= int(sqrt(x)); i++){
    if(x % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  freopen("MA_B2.inp", "r", stdin);
  freopen("MA_B2.out", "w", stdout);
  long long a, b, ans=0;
  cin >> a >> b;
  for(long long i = a; i <= b; i++){
    if(snt(i) == true){
      ans += 1;
    }
  }
  cout << ans;
}