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
// void solve(){

// }
#undef int
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // int t;
  // cin>>t;
  // while(t--){
  //     solve();
  // }
  string str;
  cin >> str;
  int arr[3] = {1, 0, 0};
  for (char ch : str) {
    if (ch == 'A') {
      swap(arr[0], arr[1]);
    } else if (ch == 'B') {
      swap(arr[1], arr[2]);
    } else
      swap(arr[0], arr[2]);
  }
  if (arr[0] == 1)
    cout << 1;
  else if (arr[1] == 1)
    cout << 2;
  else
    cout << 3;
  return 0;
}
// Made By Niraj Modi
// username :- TheCodeVenturer
// profile :- (https://codeforces.com/profile/TheCodeVenturer)