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
  int n;
  cin >> n;
  int pre = -1;
  vector<int> v1;
  while (n--) {
    int temp;
    cin >> temp;
    if (temp < pre)
      v1.push_back(temp);
    v1.push_back(temp);
    pre = temp;
  };
  cout << v1.size() << endl;
  for (int ele : v1)
    cout << ele << " ";
  cout << endl;
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