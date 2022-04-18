#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, ans = 0;
  long long pre_cp = 1, num = 3;
  cin >> n;
  for(long long i = 2; i <= n; i++){
    if(i == pre_cp + num){
      pre_cp += num;
      num += 2;
      i++;
    }
    ans += i;
  }
  cout << ans;
}