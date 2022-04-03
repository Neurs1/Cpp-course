#include <bits/stdc++.h>

using namespace std;

int a[123];

int main(){
  freopen("countchar.inp", "r", stdin);
  freopen("countchar.out", "w", stdout);
  string n;
  cin >> n;
  memset(a, 0, sizeof(a));

  for(int i = 0; i < n.size(); i++){
    a[int(n[i])] += 1;
  }
  for(int i = 97; i <= 122; i++){
    if(a[i] != 0){
      cout << char(i) << " " << a[i] << "\n";
    }
  }
}