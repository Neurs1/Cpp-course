#include <bits/stdc++.h>

using namespace std;

int main(){
  string t;
  cin >> t;
  int n;
  cin >> n;
  string k;
  bool is_done = false;
  for(int i = 0; i < n; i++){
    cin >> k;
    if(k.size() == t.size()){
      for(int j = 0; j < k.size(); j++){
        if(k[j] != t[j] && t[j] != '?'){
          cout << 0 << "\n";
          is_done = true;
          break;
        }
      }
      if(is_done != true){
        cout << 1 << "\n";
      }
      else{
        is_done = false;
      }
    }
    else{
      cout << 0 << "\n";
    }
  }
}