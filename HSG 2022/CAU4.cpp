#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("CAU4.inp", "r", stdin);
  freopen("CAU4.out", "w", stdout);
  long long n, ans;
  cin >> n;
  if(n <= 3){
    cout << n;
  }
  else{
    ans = 1;
    while(n > 4){
      ans *= 3;
      n -= 3;
    }
    cout << ans * n;
  }
}