#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("GIAIMA.inp", "r", stdin);
  freopen("GIAIMA.out", "w", stdout);
  string s;
  getline(cin, s);
  for(int i = 0; i < s.size(); i++){
    if(s[i] != 32)
      s[i] = s[i] - 3;
  }
  cout << s;
}
