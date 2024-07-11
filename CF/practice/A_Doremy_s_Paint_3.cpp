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
    int n;
    cin >> n;
    vi a(n);
    INPUT_ARRAY(a, n);
    map<int, int> mp;
    for (int ele : a)
        mp[ele]++;
    if (mp.size() > 2)
        cout << "NO" << endl;
    else if (mp.size() == 2)
    {
        int x = mp.begin()->second, y = mp.rbegin()->second;
        if (abs(x - y) > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
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