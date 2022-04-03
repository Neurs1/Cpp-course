#include <bits/stdc++.h>

using namespace std;

bool snt(long long n){
  if(n <= 1)return false;
  if(n == 2) return true;

  for(long long i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  long long n;
  cin >> n;
  while(n != 0){
    if(snt(n) == false){
      cout << "No";
      return 0;
    }
    n = n / 10;
  }
  cout << "Yes";
}