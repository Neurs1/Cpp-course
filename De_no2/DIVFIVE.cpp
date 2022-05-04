#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("DIVFIVE.inp", "r", stdin);
  freopen("DIVFIVE.out", "w", stdout);
  string s;
  cin >> s;
  while(s.size() != 0){
    if((s[s.size()-1] - 48) % 5 == 0){
      cout << s;
      return 0;
    }
    else
      s.pop_back();
  }
  cout << -1;
}