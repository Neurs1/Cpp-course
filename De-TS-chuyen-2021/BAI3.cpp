#include <bits/stdc++.h>

using namespace std;

long long a[1000007], b[1000007];

int main(){
  freopen("BAI3.inp", "r", stdin);
  freopen("BAI3.out", "w", stdout);
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  long long ma = a[n-1];
  int d = 0;
  b[d] = ma;
  for(int i = n-1; i >= 0; i--){
    if(a[i] >= ma){
      ma = a[i];
      d++;
      b[d] = ma;
    }
  }
  for(int i = d; i > 0; i--){
    cout << b[i] << " ";
  }
}