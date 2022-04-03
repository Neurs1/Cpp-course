#include <bits/stdc++.h>

using namespace std;

long long summax(long long n){
  long long s = 0;
  for (long long i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			long long j = n/i;
			if (i == j) {
				s = s + i;
			} else {
				s = s + i + j;
			}
		}
	}
  return s;
}

int main(){
  freopen("PAIRSFR.inp", "r", stdin);
  freopen("PAIRSFR.out", "w", stdout);
  long long l, r, ans = 0;
	
	cin >> l >> r;
	for(long long i = l; i <= r; i++){
    for(long long j = i+1; j <= r; j++){
      if(summax(i) == j && summax(j) == i){
        ans += 1;
        cout << i << j << "\n";
      }
    }
  }
  cout << ans << "\n";
}