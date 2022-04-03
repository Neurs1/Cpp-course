#include <bits/stdc++.h>

using namespace std;

string a;

int main(){
  freopen("DIV235.inp", "r", stdin);
  freopen("DIV235.out", "w", stdout);
  cin >> a;
  int q=0,w=0,e=0;
  if((int(a[a.size()-1])-48)%2 == 0) q = 1;
  long long ans = 0;
  for(long long i = 0; i < a.size(); i++){
    ans += int(a[i]) - 48;
  }
  if(ans%3==0) w = 1;
  if((int(a[a.size()-1])-48) == 0 || (int(a[a.size()-1])-48) == 5) e = 1;
  cout << q << " " << w << " " << e;
}