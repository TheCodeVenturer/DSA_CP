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

int value(int i, int j) {
  if (i == 0 || j == 0 || i == 9 || j == 9)
    return 1;
  if (i == 1 || j == 1 || i == 8 || j == 8)
    return 2;
  if (i == 2 || j == 2 || i == 7 || j == 7)
    return 3;
  if (i == 3 || j == 3 || i == 6 || j == 6)
    return 4;
  return 5;
}
void solve() {
  int sol = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      char ch;
      cin >> ch;
      if (ch == 'X') {
        sol += value(i, j);
      }
    }
  }
  cout << sol << endl;
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