#include <bits/stdc++.h>

using namespace std;

int main(){
  long long a, b, tmp;
  cin >> a >> b;

  //x = a - y
  //y = (-b + a) / 2
  
  if((-b + a) % 2 == 0){
    tmp = (-b + a) / 2;
    cout << a - tmp << " " << tmp;
  }
  else{
    cout << -1;
  }
}