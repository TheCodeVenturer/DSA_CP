#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
#define ll long long
#define vi vector<int>
#define endl '\n'
#define all(c) (c).begin(), (c).end()
#define sz(a) ((int)(a.size()))
#define pb emplace_back
#define INPUT_ARRAY(arr, n)                                                    \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
void solve() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> xAxis(n), yAxis(m);
  for (int i = 0; i < n; i++) {
    cin >> xAxis[i].first >> xAxis[i].second;
  }
  for (int i = 0; i < m; i++) {
    cin >> yAxis[i].first >> yAxis[i].second;
  }
}
#undef int
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin>>t;
  while (t--) {
    solve();
  }
  return 0;
}
// Made By Niraj Modi
// username :- TheCodeVenturer
// profile :- (https://codeforces.com/profile/TheCodeVenturer)