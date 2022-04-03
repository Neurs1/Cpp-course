#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("NHIPHAN.inp", "r", stdin);
  freopen("NHIPHAN.out", "w", stdout);
  long long n;
  cin >> n;
  string s;
  while(n != 0){
    s.push_back(char((n%2)+48));
    n = n / 2;
  }
  for(int i = s.size()-1; i >= 0; i--){
    cout << s[i];
  }
}