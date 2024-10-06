#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
#define ll long long
#define vi vector<int>
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        deque<int> dq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            dq.push_back(x);
        }

        while (k > 0 && !dq.empty()) {
            if(dq.size()==1){
                if(dq.front()<=k){
                    dq.pop_front();
                }
                break;
            }
            int front = dq.front();
            int back = dq.back();

            if (back < front && 2 * back <= k) {
                front -= back;
                dq.pop_front();
                dq.pop_back();

                dq.push_front(front);

                k -= 2 * back;
            } else if (front <= back && (2 * front - 1) <= k) {
                dq.pop_front();
                dq.pop_back();

                back -= (front - 1);
                k -= (2 * front - 1);

                if (k > 0) {
                    if (back > 1) dq.push_back(back - 1);
                    k--;
                } else {
                    dq.push_back(back);
                }
            } else {
                break;
            }
        }

        cout << (n - dq.size()) << endl;
    }

    return 0;
}
