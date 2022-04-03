#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, tmp = 0;
  cin >> n;
  
  int i = 1;
  while(tmp < n){
    tmp += i; i++;
  }
  
  string ans = tmp == n ? "So hoan hao." : "Khong phai la so hoan hao.";
  cout << ans;
}