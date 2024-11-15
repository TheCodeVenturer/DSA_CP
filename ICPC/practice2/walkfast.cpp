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
  int N, A, B, C, D, P, Q, Y;
  cin >> N >> A >> B >> C >> D >> P >> Q >> Y;
  vi arr(N);
  INPUT_ARRAY(arr, N);
  int a = arr[A - 1], b = arr[B - 1], c = arr[C - 1], d = arr[D - 1];

  int mini = abs(a - b) * P;

  if (abs(a - c) * P <= Y) {
    int train = abs(c - d) * Q;
    int walk = abs(d - b) * P;
    int thisPath = train + walk + Y;
    mini = min(mini, thisPath);
  }
  cout << mini << endl;
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