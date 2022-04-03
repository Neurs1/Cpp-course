#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, m, r;
  cin >> m >> n >> r;
  if((r*2) <= m && (r*2) <= n){
    double k = (m*n) - (atan(1)*4)*pow(r, 2);
    if(k >= 0) cout << "Dien tich con lai la: " << setprecision(2) << fixed << k;
    else cout << "Khong dao duoc";
  }
  else cout << "Khong dao duoc";
}