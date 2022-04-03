#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, h;
  int c, d, e;
  char f;
  getline(cin, a);
  vector<string> b;
  for(int i = 0; i < a.size(); i++){
    e = abs(int(a[i])-int(a[i]+1));
    for(int j = i+2; j < a.size(); j++){
      if(e == abs(int(a[j]) - int(a[j-1]))){
        cout << a[j] << " " << j << " " << e << "\n";
        e = abs(int(a[j]) - int(a[j-1]));
      }
      else break;
    }
  }
}