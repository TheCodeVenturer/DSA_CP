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
#define push_back emplace_back
#define INPUT_ARRAY(arr, n)                                                    \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
void solve() {
  int c;
  cin >> c;
  unordered_map<int, int> XAxis, YAxis;
  vector<pair<int, int>> v1;
  while (c--) {
    int x, y;
    cin >> x >> y;
    v1.emplace_back(make_pair(x, y));
    XAxis[x]++;
    YAxis[y]++;
  }
  int sol = 0;
  for (auto p1 : v1) {
    int x = XAxis[p1.first] - 1;
    int y = YAxis[p1.second] - 1;
    sol += (x * y);
  }
  cout << sol;
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