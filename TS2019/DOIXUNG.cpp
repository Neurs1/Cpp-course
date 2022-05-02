#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("DOIXUNG.inp", "r", stdin);
  freopen("DOIXUNG.out", "w", stdout);
  string s;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s;
    if(s.size() == 1){
      cout << s << " ";
      continue;
    }
    if(s.size() % 2 == 0)
      s.insert(s.size() / 2, "X");
    int l = 0, r = s.size() - 1;
    string ans = s+" ";
    while(l != r){
      if(s[l] != s[r]){
        ans = "";
        break;
      }
      l++; r--;
    }
    if(ans.find("X") <= ans.size()){
      ans.erase(ans.find("X"), 1);
    }
    cout << ans;
  }
}