#include <bits/stdc++.h>
#include <queue>
#include <utility>
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
  int n, eta;
  cin >> n >> eta;
  vector<vi> unis(n, {0, 0});
  for (int i = 0; i < n; i++) {
    cin >> unis[i][0] >> unis[0][1];
  }
  sort(all(unis));
  priority_queue<pair<int, int>> pq;
  pq.push({unis[0][0] - unis[0][1], unis[0][0]});
  int j=1;
  while(j<unis.size()){
    int time = unis[j][0];
    if(!pq.empty() && unis[j][1]-pq.top().second>eta){
      pq.pop();
    }
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