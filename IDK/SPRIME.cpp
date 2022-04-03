#include <bits/stdc++.h>

using namespace std;

bool snt(long long a){
  if(a <= 1) return false;
  for(int i = 2; i < int(sqrt(a)); i++) if(a % i == 0) return false;
  return true;
}
long long sumx(long long a){
  string k = to_string(a);
  long long ans2 = 0;
  for(long long i = 0; i < k.size(); i++) ans2 = ans2 + int(k[i]);
  ans2 -= 48*k.size();
  return ans2;
}
int main(){
  freopen("SPRIME.inp", "r", stdin);
  freopen("SPRIME.out", "w", stdout);
  long long n, z, x, ans = 0;
  cin >> n;
  for(long long i = 0; i < n; i++){
    cin >> z >> x;
    for(long long j = z; j <= x; j++) if(snt(j) == true && sumx(j) % 5 == 0) ans += 1;
    cout << ans << "\n";
    ans = 0;
  }
}