#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  long long tmp1, tmp2;
  double pos, pre_pos = 0, farest_count = 1;
  
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> tmp1 >> tmp2;
    
    pos = max(pre_pos, sqrt(pow(tmp1, 2) + pow(tmp2, 2)));
    
    if(pos == pre_pos)
      farest_count++;
    else
      farest_count = 1;
    
    pre_pos = pos;
  }
  
  cout << fixed << setprecision(2) << pos << " " << setprecision(0) << farest_count;
}