#include <bits/stdc++.h>

using namespace std;

bool prime[10000007];

int main(){

  (void) freopen("NT.inp", "r", stdin);
  (void) freopen("NT.out", "w", stdout);
  
  int l, r;
  cin >> l >> r;
  
  memset(prime, true, sizeof(prime));
  prime[0] = false;
  prime[1] = false;
  for (int i = 2; i * i <= r; i++){
    if (prime[i] == true){
      for (int j = i * i; j <= r; j += i)
        prime[j] = false;
    }
  }
  int k = 1;
  long long ans = 0;
  for(int i = l; i <= r; i++){
    if(prime[i]){
      ans = (ans % 1000000007 + (i * k) % 1000000007) % 1000000007;
      k++;
    }
  }
  cout << ans;
}