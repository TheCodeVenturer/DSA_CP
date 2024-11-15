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
bool isPossible(int score[3][3], vi &order) {
  for (int i = 0; i < 2; i++) {
    int c = 0;
    for (int j = 0; j < 3; j++) {
      if (score[order[i]][j] < score[order[i + 1]][j])
        c++;
      else if (score[order[i]][j] > score[order[i + 1]][j])
        return false;
    }
    if (c == 0)
      return false;
  }
  return true;
}
void solve() {
  int score[3][3];
  int temp;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> score[i][j];
    }
  }
  // for(int i=0;i<3;i++){
  //     for(int j=0;j<2;j++){
  //         cout<<score[i][j]<<" ";
  //     }
  //     cout<<endl;
  // }
  vector<vi> arr = {{0, 1, 2}, {0, 2, 1}, {1, 0, 2},
                    {1, 2, 0}, {2, 0, 1}, {2, 1, 0}};
  for (auto v1 : arr) {
    if (isPossible(score, v1)) {
      cout << "yes\n";
      return;
    }
  }
  cout << "no\n";
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