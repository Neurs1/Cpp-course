#include <bits/stdc++.h>

using namespace std;

int main(){
  string s1, s2;
  cin >> s1 >> s2;

  int ans = 0;
  for(int i = 0; i < s1.size(); i++){
    if(s1[i] != s2[i] && s1[i] != '?' && s2[i] != '?')
      ans++;
  }
  cout << ans << " ";

  for(int i = 0; i < s1.size(); i++){
    if(s1[i] == '?' && s2[i] != '?')
      s1[i] = 'A';
    if(s2[i] == '?' && s1[i] != '?')
      s2[i] = 'A';
    if(s1[i] == '?' && s2[i] == '?'){
      s1[i] = 'A';
      s2[i] = 'B';
    }
  }
  ans = 0;
  for(int i = 0; i < s1.size(); i++){
    if(s1[i] != s2[i])
      ans++;
  }
  cout << ans;
}