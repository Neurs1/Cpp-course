#include <bits/stdc++.h>

using namespace std;

int main(){
  (void) freopen("TNH.inp", "r", stdin);
  (void) freopen("TNH.out", "w", stdout);

  long long k, dummy, total = 0;
  int n;
  cin >> n >> k;
  while(n--){
    cin >> dummy;
    if(dummy <= k)
      total += dummy;
  }

  long long box = total % k == 0 ? total / k : total / k + 1;
  cout << box;
  
}