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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vi a(n);
        INPUT_ARRAY(a, n);
        int maxi = max(a[0] - 0, (x - a[n - 1]) * 2);
        for (int i = 1; i < n; i++)
        {
            maxi = max(maxi, a[i] - a[i - 1]);
        }
        cout << maxi << endl;
    }
    return 0;
}