#include <bits/stdc++.h>

using namespace std;

bool snt(long long n){
  if(n < 2){
    return false;
  }
  if(n == 2){
    return true;
  }
  for(long long i = 2; i <= sqrt(n); i++){
      if(n % i == 0){
        return false;
      }
    }
  return true;
}

int maxvalue(long long n){
  int k = 0;
  while(n != 0){
    k += n%10;
    n = n / 10;
  }
  return k;
}

int main(){
  long long n;
  cin >> n;
  while(true){
    if(snt(n) == true && maxvalue(n) % 2 == 0){
      cout << "Mat khau la: " << n;
      return 0;
    }
    n++;
  }
}