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
    string s1;
    cin >> s1;
    int sol = 0;
    for (int i = 0; i < n;)
    {
        int cur = i;
        while (i < n && s1[i] == '.')
            i++;
        if (cur == i)
            i++;
        else
        {
            if (i - cur > 2)
            {
                sol = 2;
                break;
            }
            sol += min(i - cur, 2);
        }
    }
    cout << sol << endl;
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