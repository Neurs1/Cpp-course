#include <bits/stdc++.h>

using namespace std;

bool snt(long long n){
  if(n == 0 || n == 1)
    return false;
  if(n == 2)
    return true;
  for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0)
      return false;
  }
  return true;
}

int main(){
  freopen("SMM.inp", "r", stdin);
  freopen("SMM.out", "w", stdout);
  long long n, k = 0, j;
  cin >> n;
  for(long long i = n - 1; i >= 0; i--){
    j = i;
    while (j > 0) {
        k = k * 10 + j % 10;
        j = j / 10;
    }
    if(snt(k)){
      cout << i;
      break;
    }
  }
}
