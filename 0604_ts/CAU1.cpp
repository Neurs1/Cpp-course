#include <bits/stdc++.h>

using namespace std;

int main(){
  long long a, b, final_price = 0;

  cin >> a >> b;
  
  while(a%12 != 0){
    a--;
    final_price += 10000;
  }
  while(b%12 != 0){
    b--;
    final_price += 15000;
  }
  
  final_price += a/12*115000;
  final_price += b/12*170000;

  final_price = final_price <= 400000 && final_price >= 200000 ? final_price - final_price/100*3 : final_price;
  final_price = final_price > 400000 ? final_price/100*5 : final_price;
  
  cout << final_price;
}