#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("DEMCHUSO.inp", "r", stdin);
  freopen("DEMCHUSO.out", "w", stdout);
  string s;
  cin >> s;
  int even = 0, odd = 0;
  for(int i = 0; i < s.size(); i++){
    if((s[i] - 48) % 2 == 0){
      even++;
      continue;
    }
    odd++;
  }
  cout << even << " " << odd;
}
