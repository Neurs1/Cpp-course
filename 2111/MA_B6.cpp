#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("MA_B6.inp", "r", stdin);
  freopen("MA_B6.out", "w", stdout);
  unsigned long long n;
  int ans=0;
  cin >> n;
  for(long long i = n-1; i > 1; i--){
    n = n * i;
  }
  while(n % 10 == 0){
    ans += 1;
    n = n / 10;
  }
  cout << ans;
}