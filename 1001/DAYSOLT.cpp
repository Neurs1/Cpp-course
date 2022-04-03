#include <bits/stdc++.h>

using namespace std;

int a[1000007];
pair<int, int>ans[50000];

int compress(int arr[], int n){
  if (n==0 || n==1) return n;
  int temp[n];
  int j = 0;
  for (int i=0; i<n-1; i++)
    if (arr[i] != arr[i+1]) temp[j++] = arr[i];
  temp[j++] = arr[n-1];
  for (int i=0; i<j; i++) arr[i] = temp[i];
  return j;
}

int main(){
  freopen("DAYSOLT.inp", "r", stdin);
  freopen("DAYSOLT.out", "w", stdout);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n);
  n = compress(a, n);
  int k = 0;
  for(int i = 0; i < n; i++){
    if(a[i+1] - a[i] == 1){
      int x = 1, j = i;
      for(j = i; j < n; j++){
        if(a[j+1] - a[j] == 1){
          x ++;
        }
        else{
          break;
        }
      }
      ans[k].first = x;
      ans[k].second = i;
      i = j;
      k++;
    }
  }
  pair<int, int>fin = make_pair(0, 0);
  for(int i = 0; i < k; i++){
    if(fin.first < ans[i].first){
      fin = ans[i];
    }
  }
  for(int i = fin.second; i < fin.first; i++){
    cout << a[i] << " ";
  }
}