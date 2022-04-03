#include <bits/stdc++.h>

using namespace std;

long long Arr(long long a[], long long n){
  if (n==0 || n==1) return n;
  long long temp[n];
  long long j = 0;
  long long i;
  for (i = 0; i < n-1; i++){
    if (a[i] != a[i+1]) temp[j++] = a[i];
  }
  temp[j++] = a[n-1];
  for (i = 0; i < j; i++){
    a[i] = temp[i];
  }
  return j;
}

int main(){
  freopen("CAU3.inp", "r", stdin);
  freopen("CAU3.out", "w", stdout);
  long long n;
  cin >> n;
  long long a[n];
  for(long long i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n, greater<long long>());
  n = Arr(a, n);
  if(n == 1) cout << -1;
  else{
    cout << a[0] + a[1];
  }
}