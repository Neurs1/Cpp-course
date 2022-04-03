#include <bits/stdc++.h>

using namespace std;

long long a[20];

bool snt(long long n){
  if(n <= 1)return false;
  if(n == 2) return true;

  for(long long i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  freopen("SNGUYENTO.inp", "r", stdin);
  freopen("SNGUYENTO.out", "w", stdout);
  memset(a, 0, sizeof(a));
  long long n, i = 0;
  cin >> n;
  n = n / 10;
  while(n != 0){
    if(snt(n) == false){
      cout << -1;
      return 0;
    }
    else{
      a[i] = n;
    }
    n = n / 10;
    i++;
  }
  i = 0;
  while(a[i] != 0){
    cout << a[i] << "\n";
    i++;
  }
}