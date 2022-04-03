#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("CENSOR.inp", "r", stdin);
  freopen("CENSOR.out", "w", stdout);
  
  string s, t;
  cin >> s >> t;
  while(s.find(t) < s.size()){
    s.erase(s.find(t), t.size());
  }
  cout << s;
}