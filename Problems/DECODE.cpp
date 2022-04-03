#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, n;
  cin >> s;
  int i = 0;
  int k = s.size();
  while(n.size() != k){
    n.insert(n.size(), string(1, s[s.size()/2]));
    s.erase(s.size()/2, 1);
    i++;
  }
  cout << n;
}