#include <bits/stdc++.h>

using namespace std;

long long a[100007];

int main(){
  (void) freopen("TV.inp", "r", stdin);
  (void) freopen("TV.out", "w", stdout);
  
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n);
  cout << a[n/2];
}