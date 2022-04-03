#include <bits/stdc++.h>

using namespace std;

int main(){
  (void) freopen("TSEQ.inp", "r", stdin);
  (void) freopen("TSEQ.out", "w", stdout);
  int n, k;
  cin >> n >> k;
  string s;
  for(int i = 0; i < n; i++){
    if(i == 0){
      s += "121"; 
    }
    if(i % 2 == 0){
      s += "3121";
    }
    else{
      s += "4121";
    }
  }
  cout << s[k-1];
}