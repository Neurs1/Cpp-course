#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("ARIPOG.inp", "r", stdin);
  freopen("ARIPOG.out", "w", stdout);
  long long u, d, x, i = 0;
  cin >> u >> d >> x;
  while(u >= x){
    u += d;
    i++;
  }
  if(i == 0)
    i--;
  cout << i;
}
