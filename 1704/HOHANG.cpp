#include <bits/stdc++.h>

using namespace std;

short letters1[125], letters2[125];

int main(){
  int n, num;
  string str1, str2;
  bool is_done = false;
  cin >> n;
  while(n--){
    cin >> num >> str1 >> str2;
    memset(letters1, 0, sizeof(letters1));
    memset(letters2, 0, sizeof(letters2));
    for(int i = 0; i < num; i++){
      letters1[int(str1[i])]++;
    }
    for(int i = 0; i < num; i++){
      letters2[int(str2[i])]++;
    }
    is_done = false;
    for(int i = 65; i <= 122; i++){
      if(letters1[i] != letters2[i]){
        cout << 0 << "\n";
        is_done = true;
        break;
      }
    }
    if(is_done == false)
      cout << 1 << "\n";
  }
}