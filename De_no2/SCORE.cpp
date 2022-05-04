#include <bits/stdc++.h>

using namespace std;

pair<string, double> profiles[100007];

bool sortbysec(pair<string, double> &a, pair<string, double> &b){
  return a.second < b.second;
}

int main(){
  freopen("SCORE.inp", "r", stdin);
  freopen("SCORE.out", "w", stdout);
  string ten;
  int n, score;
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> profiles[i].first >> profiles[i].second;
  sort(profiles, profiles+n, sortbysec);
  cout << profiles[n-1].first;
}