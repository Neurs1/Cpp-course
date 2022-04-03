#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("CAU1.inp", "r", stdin);
  freopen("CAU1.out", "w", stdout);
  int n;
  cin >> n;
  long long a, tmp, reversed_number = 0, remainder;
  while(n--){
    cin >> a;
    tmp = a;
    
    while(tmp != 0) {
      remainder = tmp % 10;
      reversed_number = reversed_number * 10 + remainder;
      tmp /= 10;
    }
    
    cout << reversed_number << "\n";
    cout << __gcd(a, reversed_number) << "\n";
    if(__gcd(a, reversed_number) == 1){
      cout << 1 << "\n";
    }
    else{
      cout << 0 << "\n";
    }
    reversed_number = 0;
  }
}