#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n - i - 1; j++){
      int k = n - j - i;
      if(i*i == k*k + j*j){
        cout << 1;
        return 0;
      }
    }
  }
  cout << 0;
}