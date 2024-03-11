#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> boys(n), aprt(m, 0);
    for (int i = 0; i < n; i++)
        cin >> boys[i];
    for (int i = 0; i < m; i++)
        cin >> aprt[i];
    sort(boys.begin(), boys.end());
    sort(aprt.begin(), aprt.end());
    int i = 0, j = 0;
    int count = 0;
    while (i < n && j < m)
    {
        int dem = boys[i];
        int size = aprt[j];
        if (abs(dem - size) <= k)
        {
            i++, j++, count++;
        }
        else if (dem > size)
            j++;
        else
            i++;
    }
    cout << count;
    return 0;
}