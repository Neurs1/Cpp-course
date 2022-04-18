#include <bits/stdc++.h>

using namespace std;

int main(){

  freopen("COVID19.inp", "r", stdin);
  freopen("COVID19.out", "w", stdout);
  
  long long a, b, a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  cin >> a >> b;
  while(a % 2 == 0 || a % 3 == 0){
    if(a % 2 == 0){
      a /= 2; 
      a1 = a1 + 1;
    }
    if(a % 3 == 0){
      a /= 3;
      a2 = a2 + 1;
    }
  }
  while(b % 2 == 0 || b % 3 == 0){
    if(b % 2 == 0){
      b /= 2;
      b1 = b1 + 1;
    }
    if(b % 3 == 0){
      b /= 3;
      b1 = b1 + 1;
    }
  }
  if (b != a || a2 > b2 || a1 > b1)
    cout << -1;
  else
    cout << b2 + b1 - a1 - a2;
}