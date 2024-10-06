#include <bits/stdc++.h>
#include <iostream>
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

vector<int> lps(string pattern) {
  int n = pattern.size();
  vector<int> lpsArr(n, 0);
  int i = 0;
  int j = 1;
  while (j < n) {
    if (pattern[i] == pattern[j]) {
      lpsArr[j++] = ++i;
    } else {
      if (i > 0)
        i = lpsArr[i - 1];
      else {
        i = 0;
        j++;
      }
    }
  }
  return lpsArr;
}
bool searchPattern(string pattern, string text) {
  vector<int> lpsArr = lps(pattern);
  int i = 0, j = 0;
  while (j < text.size() && i < pattern.size()) {
    if (pattern[i] == text[j]) {
      j++;
      i++;
    } else {
      if (i > 0)
        i = lpsArr[i - 1];
      else {
        i = 0;
        j++;
      }
    }
  }
  return i == pattern.size();
}
void solve() {
  int n, m;
  cin >> n >> m;
  string text;
  cin >> text;
  string pattern;
  cin >> pattern;
  string actualText = text;
  int count = 0;
  while (actualText.size() < m) {
    actualText += actualText;
    count++;
  }
  if (searchPattern(pattern, actualText))
    cout << count << endl;
  else if (searchPattern(pattern, actualText + text))
    cout << (count + 1) << endl;
  else
    cout << (-1) << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    // solve();
    int n, m;
    cin >> n >> m;
    string text;
    cin >> text;
    string pattern;
    cin >> pattern;
    string actualText = text;
    int count = 0;
    while (actualText.size() < m) {
      actualText += actualText;
      count++;
    }
    if (searchPattern(pattern, actualText))
      cout << count << endl;
    else if (searchPattern(pattern, actualText + text))
      cout << (count + 1) << endl;
    else
      cout << (-1) << endl;
  }
  return 0;
}
// Made By Niraj Modi
// username :- TheCodeVenturer
// profile :- (https://codeforces.com/profile/TheCodeVenturer)