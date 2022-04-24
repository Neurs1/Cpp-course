#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("DEMBI.inp", "r", stdin);
  freopen("DEMBI.out", "w", stdout);
  long long n;
  cin >> n;
  long long y = 2*n / 5;
  if(2*double(n) / 5 == y){
    cout << n - y << ' ' << y;
  }
  else{
    cout << -1;
  }
}