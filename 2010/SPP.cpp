#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("SPP.inp", "r", stdin);
  freopen("SPP.out", "w", stdout);
  long long a,b,ans=0,fina=0;
  cin >> a >> b;
  for(long long i = a; i <= b; i++){
    ans = 0;
    for (long long j = 1; j <= sqrt(i); j++) {
		if (i % j == 0){
			long long k = i/j;
			if (j == k){
				ans += j;
			}
      else{
				ans += j + k;
			  }
		  }
	  }
    ans -= i;
    if (ans > i){
      fina += 1;
    }
  }
  cout << fina;
}