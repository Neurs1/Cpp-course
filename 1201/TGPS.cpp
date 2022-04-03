#include <bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
  if(b == 0) return a;
  return ucln(b, a%b);
}

int main(){
  freopen("TGPS.inp", "r", stdin);
  freopen("TGPS.out", "w", stdout);
  long long a, b;
  cin >> a >> b;
  long long c = ucln(a, b);
  cout << a/c << " " << b/c;
}