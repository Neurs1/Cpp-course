#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m, ans = 0;
  cin >> n >> m;
  
  for(int i = 1; i < n; i++)
    ans += i;
  for(int i = 1; i < m; i++)
    ans += i;
  
  cout << "So cach chon: " << ans;
}