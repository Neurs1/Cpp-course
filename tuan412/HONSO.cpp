#include <bits/stdc++.h>

using namespace std;

int ucln(long long a, long long b){
  if (a == 0 || b == 0) return a + b;
  while (a != b){
    if (a > b) a -= b;
    else b -= a;
  }
  return a;
}
int main(){
  freopen("HONSO.inp", "r", stdin);
  freopen("HONSO.out", "w", stdout);
  long long n, m;
  cin >> n >> m;
  if(m == 0){
    cout << -1;
    return 0;
  }
  if(n == 0){
    cout << "0 0 0";
    return 0;
  }
  cout << n/m << " ";
  long long h = ucln(n, m);
  cout << (n-m*(n/m))/h << " " << m/h;
}