#include <bits/stdc++.h>
#include <iostream>
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
  int n;
  cin >> n;
  int sum = 0;
  vi a(n);
  INPUT_ARRAY(a, n);
  sort(all(a));
  for (int i = 0; i < n / 2; i++) {
    sum += abs(a[i] - a[n - i - 1]);
  }
  cout << sum << endl;
}
#undef int
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