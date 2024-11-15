#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
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
  int a, b, x1, y1, x2, y2;
  cin >> a >> b;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  set<pair<int, int>> s1;
  int del[] = {-1, 1};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      s1.insert(make_pair(x1 + (del[i] * a), y1 + (del[j] * b)));
      s1.insert(make_pair(x1 + (del[i] * b), y1 + (del[j] * a)));
    }
  }
  int c = 0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      pair<int, int> p1 = make_pair(x2 + (del[i] * a), y2 + (del[j] * b));
      pair<int, int> p2 = make_pair(x2 + (del[i] * b), y2 + (del[j] * a));
      if (s1.count(p1)){
        s1.erase(p1);
        c++;
      }
      if (s1.count(p2)){
        s1.erase(p2);
        c++;
      }
    }
  }
  cout << c << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
// Made By Niraj Modi
// username :- TheCodeVenturer
// profile :- (https://codeforces.com/profile/TheCodeVenturer)