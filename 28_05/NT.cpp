#include <bits/stdc++.h>

using namespace std;

bool prime[10000007];

int main(){
  freopen("NT.inp", "r", stdin);
  freopen("NT.out", "w", stdout);
  
  int l, r;
  cin >> l >> r;

  unsigned long long ans = 0;
  int p = 0;
  
  memset(prime, true, sizeof(prime));
  prime[1] = false; prime[0] = false;

  for (int i = l-l%2; i * i <= r; i++)
    if (prime[i] == true)
      for (int j = i * i; j <= r; j += i)
        prime[j] = false;

  for(int i = l; i <= r; i++)
    if(prime[i] == true){
      p++; ans += p * i;
    }
  
  cout << ans % 1000000007;
}