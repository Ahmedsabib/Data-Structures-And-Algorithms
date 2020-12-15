#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, x;
  cin >> n >> x;
  int v[n];
  for(int i = 0; i < n; ++i){
   cin >> v[i];
  }
  int a = 0, b = n-1;
  int k = (a+b)/2;
  while(a <= b){
   if(v[k] == x) break;
   else if(v[k] > x) b = k-1;
   else a = k+1;
  }
  if(a > b) cout << "NO" << '\n';
  else cout << "YES" << '\n'; 
  return 0;
}
