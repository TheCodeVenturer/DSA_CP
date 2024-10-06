#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
#define vi vector<int>
#define endl '\n'
#define all(c) (c).begin(), (c).end()
#define sz(a) ((int)(a.size()))
#define INPUT_ARRAY(arr, n)     \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
void solve()
{
    int n, k;
    string str;
    cin >> n >> k >> str;
    int a[26] = {0};
    for (char ch : str)
        a[ch - 'a']++;
    int odds = 0;
    for (int ele : a)
        if (ele % 2)
            odds++;
    if (odds - 1 > k)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// Made By Niraj Modi
// username :- TheCodeVenturer
// profile :- (https://codeforces.com/profile/TheCodeVenturer)