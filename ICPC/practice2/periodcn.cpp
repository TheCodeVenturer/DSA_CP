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
vector<int> possibles;

int lowerBound(const std::vector<int> &arr, int value) {
  int left = 0, right = arr.size();
  while (left < right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] < value)
      left = mid + 1;
    else
      right = mid;
  }
  return left;
}

int upperBound(const std::vector<int> &arr, int value) {
  int left = 0, right = arr.size();
  while (left < right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] <= value)
      left = mid + 1;
    else
      right = mid;
  }
  return left;
}

int binaryToInt(const string &binaryStr) { return stol(binaryStr, nullptr, 2); }

void solve() {
  int l, r;
  cin >> l >> r;
  int left = upperBound(possibles, l - 1);
  int right = upperBound(possibles, r);
  cout << (right - left) << endl;
}
void help(string start, string pre, string post) {
  bool flag = true;
  while (start.size() + pre.size() <= 32) {
    if (flag)
      start.append(pre);
    else
      start.append(post);
    flag = !flag;
    possibles.pb(binaryToInt(start));
  }
}
#undef int
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i < 17; i++) {
    string pre(i, '1');
    string post(i, '0');
    help("", pre, post);
  }
  string pre(17, '1');
  long long val = binaryToInt(pre);

  for (int i = 17; i <= 32; i++) {
    possibles.pb(val);
    val = val * 2;
    val++;
  }
  sort(all(possibles));
  while (t--) {
    solve();
  }
  return 0;
}
// Made By Niraj Modi
// username :- TheCodeVenturer
// profile :- (https://codeforces.com/profile/TheCodeVenturer)