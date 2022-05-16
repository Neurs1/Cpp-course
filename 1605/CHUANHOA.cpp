#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("CHUANHOA.inp", "r", stdin);
  freopen("CHUANHOA.out", "w", stdout);
  string s;
  int capital, normal;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 65 && s[i] <= 90){
      capital++;
      continue;
    }
    normal++;
  }
  if(normal > capital){
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 65 && s[i] <= 90){
        s[i] = char(s[i]+32);
      }
    }
    cout << s;
  }
  else{
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 97 && s[i] <= 122){
        s[i] = char(s[i]-32);
      }
    }
  }
  cout << s;
}
