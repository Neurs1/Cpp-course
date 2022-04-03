#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  string s;
  int m = 0;
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> s;
    if(s.size() == 1){
      cout << s << "\n";
      continue;
    }
    while(s.size() != 1){
      m = 0;
      for(int j = 0; j < s.size(); j++){
        m += int(s[j]) - 48;
      }
      s = to_string(m);
    }
    cout << s << "\n";
  }
}