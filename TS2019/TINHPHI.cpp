#include <bits/stdc++.h>

using namespace std;

int main(){
  double n, paid;
  cin >> n;
  if(1 <= n && n <= 1000)
    paid = 30 * n;
  if(1000 < n && n <= 2000)
    paid = 1000 * 30 + 20 * (n - 1000);
  if(n > 2000)
    paid = 1000 * 30 + 20 * 1000 + 10 * (n - 2000);
  cout << "Tong so tien phai tra la: " << fixed << setprecision(2) << paid / 100 * 90;
}