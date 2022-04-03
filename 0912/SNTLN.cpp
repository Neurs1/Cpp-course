#include <bits/stdc++.h>

using namespace std;

bool check[100008];

int main(){
  freopen("SNTLN.inp", "r", stdin);
  freopen("SNTLN.out", "w", stdout);
  int N = 1000007;
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = 2 * i; j <= N; j += i) {
        check[j] = false;
      }
    }
  }
  int t;
  cin >> t;
  int x;
  while(t > 0){
    cin >> x;
    for (int i = x; i >= 2; i--) {
      if (check[i] == true) {
        cout << i << "\n";
        break;
      }
    }
    t--;
  }
}