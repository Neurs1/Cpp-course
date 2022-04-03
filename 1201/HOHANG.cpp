#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("HOHANG.inp", "r", stdin);
  freopen("HOHANG.out", "w", stdout);
  int n, k;
  bool skip = false;
  string s, m;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> k;
    cin >> s;
    cin >> m;
    s += m;
    sort(s.begin(), s.end());
    int count = 0;
    for(int i = 0; i < s.size()-1; i++){
      if(s[i] == s[i+1]){
        i += 2;
      }
      else{
        cout << 0 << "\n";
        skip = true;
        break;
      }
    }
    if(skip == false){
      cout << 1 << "\n";
    }
    skip = false;
  }
}